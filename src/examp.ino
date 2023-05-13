#include<WiFi.h>
#include"Arduino.h"
#include <ArduinoJson.h>
#include <HTTPClient.h>
#include<TFT_eSPI.h>
#include<myfont.h>
#include<ikun.h>
#include<NTPClient.h>
#include <WiFiUdp.h>
#include <pic.h>

TFT_eSPI tft = TFT_eSPI();

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP,"ntp.aliyun.com");  //NTP服务器地址

const char* id="HUAWEI-206206";   //定义两个字符串指针常量
const char* psw="heu1234567890";

//天气相关参数
String API = "SHPLH4QUZZGyRv0uV";
String WeatherURL = "";
String CITY = "烟台";
String url_xinzhi = "";
String Weather = "0";

HTTPClient https;
 
String GitURL(String api,String city)
{
  url_xinzhi =  "https://api.seniverse.com/v3/weather/now.json?key=";
  url_xinzhi += api;
  url_xinzhi += "&location=";
  url_xinzhi += city;
  url_xinzhi += "&language=zh-Hans&unit=c";
  return url_xinzhi;
}
 
void ParseWeather(String url)
{ 
  DynamicJsonDocument doc(1024); //分配内存,动态 

   for(int i = 0; i < 5; i++) {
    Display_time();//利用等待 天气服务器响应的时间 更新时间信息
    delay(1000);   //间隔1秒访问ntp,刷新时间戳
  }

  https.begin(url);
 
  int httpGet = https.GET();
  if(httpGet > 0)
  {
    Serial.printf("HTTPGET is %d",httpGet);
    
    if(httpGet == HTTP_CODE_OK)
    {
      String json = https.getString();
      // Serial.println(json);
      deserializeJson(doc, json);
      
      JsonObject results_0 = doc["results"][0];

      JsonObject results_0_location = results_0["location"];

      const char* cityname = results_0_location["name"];

      const char* country = results_0_location["country"];

      const char* pathname = results_0_location["path"];

      JsonObject results_0_now = results_0["now"];

      const char* weather = results_0_now["text"];

      int code = results_0_now["code"];

      int temperature = results_0_now["temperature"].as<int>();
   
    tft.fillRect(5,65,64,16,TFT_BLACK);

    showMyFonts(5,65,cityname,TFT_YELLOW);
    
    //  Serial.println(lastupdate);
     #define X 4
    #define Y 110
    #define pX 68
    #define pY 68
    switch (code)
    {
      case 0: showMyFonts(X,Y,"晴" , TFT_GREEN); tft.pushImage(pX,pY, 51,51,p1);break;
      case 1: showMyFonts(X,Y,"夜晚晴" , TFT_GREEN); tft.pushImage(pX,pY, 51,52,p2);break;
      case 2: showMyFonts(X,Y,"晴" , TFT_GREEN); tft.pushImage(pX,pY, 51,51,p3);break;
      case 3: showMyFonts(X,Y,"夜晚晴" , TFT_GREEN); tft.pushImage(pX,pY, 51,52,p4);break;
      case 4: showMyFonts(X,Y,"多云" , TFT_GREEN); tft.pushImage(pX,pY, 60,47,p5);break;
      case 5: showMyFonts(X,Y,"晴间多云" , TFT_GREEN); tft.pushImage(pX,pY, 60,44,p6);break;
      case 6: showMyFonts(X,Y,"晴间多云" , TFT_GREEN); tft.pushImage(pX,pY, 60,51,p7);break;
      case 7: showMyFonts(X,Y,"大部多云" , TFT_GREEN); tft.pushImage(pX,pY, 60,42,p8);break;
      case 8: showMyFonts(X,Y,"大部多云" , TFT_GREEN); tft.pushImage(pX,pY, 56,49,p9);break;
      case 9: showMyFonts(X,Y,"阴" , TFT_GREEN); tft.pushImage(pX,pY, 60,40,p10);break;
      case 10: showMyFonts(X,Y,"阵雨" , TFT_GREEN); tft.pushImage(pX,pY, 60,59,p11);break;
      case 11: showMyFonts(X,Y,"雷阵雨" , TFT_GREEN); tft.pushImage(pX,pY, 56,56,p12);break;
    }
    tft.fillRect(5,87,63,16,TFT_BLACK);       
    tft.setCursor(5, 88, 1);                 
    tft.setTextColor(TFT_SKYBLUE);             
    tft.setTextSize(2);                    
    tft.println(temperature);
    if ((temperature<10)&&(temperature>0))
    {
      showMyFont(24,87,"℃",TFT_SKYBLUE);
    }
    else{
      showMyFont(40,87,"℃",TFT_SKYBLUE);
    }
         }
    else
    {
      Serial.printf("ERROR1!!");
    }
  }
  else
  {
    Serial.printf("ERROR2!!");
  }
  https.end();
}
void showMyFont(int32_t x, int32_t y, const char c[3], uint32_t color) { 
    for (int k = 0; k <= 47; k++)// 根据字库的字数调节循环的次数
    if (hanzi[k].Index[0] == c[0] && hanzi[k].Index[1] == c[1] && hanzi[k].Index[2] == c[2])
    { 
        tft.drawBitmap(x, y, hanzi[k].hz_Id, hanzi[k].hz_width, 16, color);
    }
}//显示单个汉字

void showMyFonts(int32_t x, int32_t y, const char str[], uint32_t color) { 
    //显示整句汉字，字库比较简单，上下、左右输出是在函数内实现
    int x0 = x;
    for (int i = 0; i < strlen(str); i += 3) {
      showMyFont(x0, y, str+i, color);
      x0 += 17;
    }
}

void Display_time(){
  timeClient.update();

   unsigned long epochTime = timeClient.getEpochTime();

   int currentSec = timeClient.getSeconds();

   int currentHour = timeClient.getHours();

    int currentMinute = timeClient.getMinutes();

    int weekDay = timeClient.getDay();

    struct tm *ptm = gmtime ((time_t *)&epochTime);
    int monthDay = ptm->tm_mday;

    int currentMonth = ptm->tm_mon+1;

    int currentYear = ptm->tm_year+1900;

     tft.fillRect(102,42,22,14,TFT_BLACK);     //部分区域清屏，刷新秒
  //10+2+10=22，“数字”分辨率10*14像素，连续显示时间隔2像素
  tft.setCursor(102, 42, 1);                //设置文本起始坐标
  tft.setTextColor(TFT_RED);                //设置文本颜色为红色
  tft.setTextSize(2);                       //设置文字的大小 (1~7)
  if (currentSec < 10){                     //将 0-9 变为00-09
    tft.println(0);                    
    tft.setCursor(114, 42, 1);              
    tft.setTextColor(TFT_RED);              
    tft.setTextSize(2);                      
    tft.println(currentSec);                     
  }
  else{
    tft.println(currentSec);               //显示文字
  }  


  if (currentSec==0){                       //刷新分
    tft.fillRect(55,28,44,28,TFT_BLACK);    //20+4+20=44 
  }
  tft.setCursor(55, 28, 1);                
  //tft.setTextFont(7);
  tft.setTextColor(TFT_CYAN);             
  tft.setTextSize(4);                     
  if (currentMinute < 10) {
    tft.println(0);                       
    tft.setCursor(79, 28, 1);               
    tft.setTextColor(TFT_CYAN);              
    tft.setTextSize(4);                     
    tft.println(currentMinute);               
  }
  else{
    tft.println(currentMinute);                
  }


  if (currentMinute==0 && currentSec==0){    //刷新时
    tft.fillRect(1,28,44,28,TFT_BLACK); 
  }
  tft.setCursor(1, 28, 1);            
  //tft.setTextFont(7);
  tft.setTextColor(TFT_CYAN);         
  tft.setTextSize(4);                
  if (currentHour < 10) {
    //tft.println(0);
    tft.setCursor(25, 28, 1);   
    tft.setTextColor(TFT_CYAN);     
    tft.setTextSize(4);                      
    tft.println(currentHour);        
  }
  else{
    tft.println(currentHour);        
  }

  tft.setCursor(40, 28, 1);                //时分分隔符
  tft.setTextColor(TFT_CYAN);       
  tft.setTextSize(4);                
  tft.println(":");                     

  tft.setCursor(89, 5, 1);                 //月日分隔符
  tft.setTextColor(TFT_WHITE);             
  tft.setTextSize(2);                     
  tft.println("/");                      

  if (currentHour==0 && currentMinute==0 && currentSec==0){      //刷新 日、周
    tft.fillRect(102,5,22,14,TFT_BLACK); 
    tft.fillRect(5,5,32,16,TFT_BLACK); 
  }
  tft.setCursor(102, 5, 1);                
  tft.setTextColor(TFT_YELLOW);          
  tft.setTextSize(2);                   
  if (monthDay < 10) {
    //tft.println(0);                         //"1_月01日",感觉太奇怪了,还是"1_月_1日"吧！
    tft.setCursor(114, 5, 1);         
    tft.setTextColor(TFT_YELLOW);    
    tft.setTextSize(2);             
    tft.println(monthDay);  
  }
  else {
    tft.println(monthDay);    
  }
  switch(weekDay){
    case 0: showMyFonts(5, 5, "周日", TFT_GREENYELLOW);break; 
    case 1: showMyFonts(5, 5, "周一", TFT_GREENYELLOW);break; 
    case 2: showMyFonts(5, 5, "周二", TFT_GREENYELLOW);break; 
    case 3: showMyFonts(5, 5, "周三", TFT_GREENYELLOW);break; 
    case 4: showMyFonts(5, 5, "周四", TFT_GREENYELLOW);break; 
    case 5: showMyFonts(5, 5, "周五", TFT_GREENYELLOW);break; 
    case 6: showMyFonts(5, 5, "周六", TFT_GREENYELLOW);break; 
    default: break;
  }

  if (monthDay==1 && currentHour==0 && currentMinute==0 && currentSec==0){   //刷新月
    tft.fillRect(65,5,22,14,TFT_BLACK); 
  }
  tft.setCursor(65, 5, 1);                 
  tft.setTextColor(TFT_YELLOW);        
  tft.setTextSize(2);                    
  if (currentMonth <10) {
    //tft.println(0);                        //"_1月_1日"比"1_月_1日"更好一点！
    tft.setCursor(77, 5, 1);               
    tft.setTextColor(TFT_YELLOW);          
    tft.setTextSize(2);                    
    tft.println(currentMonth);
  }
  else {
    tft.println(currentMonth);               
  }


  if (currentMonth==1 && monthDay==1 && currentHour==0 && currentMinute==0 && currentSec==0){  //刷新年
    tft.fillRect(102,28,23,7,TFT_BLACK); 
  }
  tft.setCursor(102, 28, 1);             
  tft.setTextColor(TFT_RED);          
  tft.setTextSize(1);                       
  tft.println(currentYear); 
}

void setup() {
  Serial.begin(115200);
  tft.init();
  tft.fillScreen(TFT_BLACK);
  Serial.println("screen init success.");
  WiFi.begin(id,psw);
  while(WiFi.status()!=WL_CONNECTED){			//未连接上
    delay(500);
    tft.pushImage(0,0,128,128,gImage_ikun);
  //   Serial.println("...");
  }
  tft.println("WiFi connected!");
  tft.fillScreen(TFT_BLACK);				//清屏
  timeClient.begin();
  timeClient.setTimeOffset(28800);  // + 1区 偏移3600， +8区 ：3600×8 = 28800  
  WeatherURL = GitURL(API,CITY); 

  // WiFi.disconnect(true);
  // WiFi.mode(WIFI_OFF);
  // Serial.println("WiFi disconnected!");
  
 
  // tft.ptintln(temperature);
}

void loop(){						

ParseWeather(WeatherURL);
for (int i = 0; i < 115; i++)
{
  Display_time();
  delay(1000);
}

// delay(500);
// tft.println(Weather);
// Serial.println(weather);
}
