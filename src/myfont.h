#include <pgmspace.h>
const unsigned char hz_zhou PROGMEM[] ={
    0x00,0x00,0x3F,0xF8,0x21,0x08,0x21,0x08,0x2F,0xE8,0x21,0x08,0x21,0x08,0x3F,0xF8,0x20,
    0x08,0x27,0xC8,0x24,0x48,0x24,0x48,0x27,0xC8,0x40,0x08,0x40,0x28,0x80,0x10,/*"周",0*/
};
const unsigned char hz_mon PROGMEM[] ={
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,/*"一",1*/
};
const unsigned char hz_tue PROGMEM[] ={
    0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,/*"二",2*/
};
const unsigned char hz_wed PROGMEM[] ={
    0x00,0x00,0x00,0x00,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x00,/*"三",3*/
};
const unsigned char hz_thu PROGMEM[] ={
    0x00,0x00,0x00,0x00,0x7F,0xFC,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x48,
    0x44,0x48,0x3C,0x50,0x04,0x60,0x04,0x40,0x04,0x7F,0xFC,0x40,0x04,0x00,0x00,/*"四",4*/
};
const unsigned char hz_fri PROGMEM[] ={
    0x00,0x00,0x7F,0xFC,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x3F,0xF0,0x04,0x10,0x04,
    0x10,0x04,0x10,0x04,0x10,0x08,0x10,0x08,0x10,0x08,0x10,0xFF,0xFE,0x00,0x00,/*"五",5*/
};
const unsigned char hz_sat PROGMEM[] ={
    0x02,0x00,0x01,0x00,0x00,0x80,0x00,0x80,0x00,0x00,0xFF,0xFE,0x00,0x00,0x00,0x00,0x04,
    0x40,0x04,0x20,0x08,0x10,0x08,0x08,0x10,0x08,0x20,0x04,0x40,0x04,0x00,0x00,/*"六",6*/
};
const unsigned char hz_sun PROGMEM[] ={
    0x00,0x00,0x1F,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,
    0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,/*"日",7*/
};
const unsigned char hz_duo PROGMEM[] ={
        0x02,0x00,0x02,0x00,0x07,0xF0,0x08,0x20,0x38,0x40,0x04,0x80,0x03,0x40,0x0C,0x80,0x71,
        0xF8,0x02,0x08,0x0C,0x10,0x32,0x20,0x01,0x40,0x01,0x80,0x0E,0x00,0x70,0x00,/*"多",8*/
        };
    const unsigned char hz_yun PROGMEM[] ={
        0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,0x02,0x00,
        0x04,0x00,0x04,0x00,0x08,0x40,0x10,0x20,0x20,0x10,0x7F,0xF8,0x20,0x08,0x00,0x08,/*"云",9*/
    };
    const unsigned char hz_qing PROGMEM[] ={
        0x00,0x20,0x00,0x20,0x7B,0xFE,0x48,0x20,0x49,0xFC,0x48,0x20,0x4B,0xFE,0x78,0x00,
        0x49,0xFC,0x49,0x04,0x49,0xFC,0x49,0x04,0x79,0xFC,0x49,0x04,0x01,0x14,0x01,0x08,/*"晴",10*/
    };
    const unsigned char hz_jian PROGMEM[] ={
        0x20,0x00,0x13,0xFC,0x10,0x04,0x40,0x04,0x47,0xC4,0x44,0x44,0x44,0x44,0x44,0x44,
        0x47,0xC4,0x44,0x44,0x44,0x44,0x44,0x44,0x47,0xC4,0x40,0x04,0x40,0x14,0x40,0x08,/*"间",11*/
    };
    const unsigned char hz_da PROGMEM[] ={
        0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0xFF,0xFE,0x01,0x00,0x01,0x00,
        0x02,0x80,0x02,0x80,0x04,0x40,0x04,0x40,0x08,0x20,0x10,0x10,0x20,0x08,0xC0,0x06,/*"大",12*/
    };
    const unsigned char hz_bu PROGMEM[] ={
        0x10,0x00,0x08,0x3E,0x7F,0xA2,0x00,0x24,0x21,0x24,0x12,0x28,0xFF,0xE4,0x00,0x24,
        0x00,0x22,0x3F,0x22,0x21,0x22,0x21,0x34,0x21,0x28,0x3F,0x20,0x21,0x20,0x00,0x20,/*"部",13*/
    };
    const unsigned char hz_yin PROGMEM[] ={
        0x00,0x00,0x7D,0xFC,0x45,0x04,0x49,0x04,0x49,0x04,0x51,0xFC,0x49,0x04,0x49,0x04,
        0x45,0x04,0x45,0xFC,0x45,0x04,0x69,0x04,0x52,0x04,0x42,0x04,0x44,0x14,0x48,0x08,/*"阴",14*/
    };
    const unsigned char hz_zhen PROGMEM[] ={
        0x00,0x40,0x7C,0x40,0x44,0x40,0x4B,0xFE,0x48,0x80,0x50,0xA0,0x49,0x20,0x49,0xFC,
        0x44,0x20,0x44,0x20,0x44,0x20,0x6B,0xFE,0x50,0x20,0x40,0x20,0x40,0x20,0x40,0x20,/*"阵",15*/
    };
    const unsigned char hz_yu PROGMEM[] ={
        0x00,0x00,0xFF,0xFE,0x01,0x00,0x01,0x00,0x01,0x00,0x7F,0xFC,0x41,0x04,0x41,0x04,
        0x49,0x44,0x45,0x24,0x41,0x04,0x49,0x44,0x45,0x24,0x41,0x04,0x41,0x14,0x40,0x08,/*"雨",16*/
    };
    const unsigned char hz_lei PROGMEM[] ={
        0x00,0x00,0x3F,0xF8,0x01,0x00,0x7F,0xFE,0x41,0x02,0x9D,0x74,0x01,0x00,0x1D,0x70,
        0x00,0x00,0x3F,0xF8,0x21,0x08,0x21,0x08,0x3F,0xF8,0x21,0x08,0x21,0x08,0x3F,0xF8,/*"雷",17*/
    };
    const unsigned char hz_ban PROGMEM[] ={
       0x08,0x40,0x0A,0x44,0x09,0x48,0x11,0x50,0x10,0x40,0x37,0xFC,0x30,0x40,0x50,0x40,
       0x90,0x40,0x1F,0xFE,0x10,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x10,0x40,0x10,0x40,/*"伴",18*/
    };
    const unsigned char hz_you PROGMEM[] ={
        0x02,0x00,0x02,0x00,0xFF,0xFE,0x04,0x00,0x04,0x00,0x0F,0xF0,0x08,0x10,0x18,0x10,
        0x2F,0xF0,0x48,0x10,0x88,0x10,0x0F,0xF0,0x08,0x10,0x08,0x10,0x08,0x50,0x08,0x20,/*"有",19*/
    };
    const unsigned char hz_bing PROGMEM[] ={
        0x00,0x40,0x40,0x40,0x20,0x40,0x20,0x44,0x00,0x68,0x07,0x70,0x11,0x60,0x11,0x50,
        0x21,0x50,0xE2,0x48,0x22,0x48,0x24,0x44,0x28,0x42,0x20,0x40,0x21,0x40,0x00,0x80,/*"冰",20*/
    };
    const unsigned char hz_bao PROGMEM[] ={
        0x3F,0xF8,0x01,0x00,0x7F,0xFE,0x41,0x02,0x9D,0x74,0x01,0x00,0x1D,0x70,0x08,0x00,
        0x1F,0xF0,0x20,0x10,0x5F,0x90,0x10,0x90,0x1F,0xD0,0x10,0x20,0x10,0x04,0x0F,0xFC,/*"雹",21*/
    };
    const unsigned char hz_xiao PROGMEM[] ={
        0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x11,0x10,0x11,0x08,0x11,0x04,
        0x21,0x04,0x21,0x02,0x41,0x02,0x81,0x02,0x01,0x00,0x01,0x00,0x05,0x00,0x02,0x00,/*"小",22*/
    };
    const unsigned char hz_zhong PROGMEM[] ={
        0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,0x3F,0xF8,0x21,0x08,0x21,0x08,0x21,0x08,
        0x21,0x08,0x21,0x08,0x3F,0xF8,0x21,0x08,0x01,0x00,0x01,0x00,0x01,0x00,0x01,0x00,/*"中",23*/
    };
    const unsigned char hz_bao1 PROGMEM[] ={
        0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x10,0x10,0x1F,0xF0,0x08,0x20,0x7F,0xFC,0x08,0x20,
        0xFF,0xFE,0x08,0x20,0x31,0x18,0xC9,0x26,0x05,0x40,0x09,0x20,0x15,0x10,0x22,0x08,/*"暴",24*/
    };
    const unsigned char hz_te PROGMEM[] ={
        0x10,0x20,0x10,0x20,0x50,0x20,0x51,0xFC,0x7C,0x20,0x50,0x20,0x93,0xFE,0x10,0x08,
        0x1C,0x08,0xF1,0xFE,0x50,0x08,0x10,0x88,0x10,0x48,0x10,0x08,0x10,0x28,0x10,0x10,/*"特",25*/
    };
    const unsigned char hz_dong PROGMEM[] ={
        0x00,0x40,0x40,0x40,0x20,0x40,0x27,0xFE,0x00,0x80,0x09,0x20,0x09,0x20,0x12,0x20,
        0x13,0xFC,0xE0,0x20,0x21,0x28,0x21,0x24,0x22,0x22,0x24,0x22,0x20,0xA0,0x00,0x40,/*"冻",26*/
    };
    const unsigned char hz_jia PROGMEM[] ={
        0x01,0x00,0x01,0x00,0x01,0x00,0x7F,0xFC,0x01,0x00,0x11,0x10,0x09,0x20,0x01,0x00,
        0xFF,0xFE,0x01,0x00,0x02,0x80,0x02,0x80,0x04,0x40,0x08,0x20,0x30,0x18,0xC0,0x06,/*"夹",27*/
    };
    const unsigned char hz_xue PROGMEM[] ={
        0x3F,0xF8,0x01,0x00,0x7F,0xFE,0x41,0x02,0x9D,0x74,0x01,0x00,0x1D,0x70,0x00,0x00,
        0x3F,0xF8,0x00,0x08,0x00,0x08,0x1F,0xF8,0x00,0x08,0x00,0x08,0x3F,0xF8,0x00,0x08,/*"雪",28*/
    };
    const unsigned char hz_fu PROGMEM[] ={
        0x00,0x08,0x20,0x3C,0x13,0xC0,0x10,0x04,0x82,0x44,0x41,0x28,0x48,0x00,0x0B,0xF8,
        0x10,0x10,0x10,0x20,0xE7,0xFE,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0xA0,0x00,0x40,/*"浮",29*/
    };
    const unsigned char hz_chen PROGMEM[] ={
        0x01,0x00,0x01,0x00,0x09,0x20,0x09,0x10,0x11,0x08,0x21,0x04,0x41,0x04,0x00,0x00,
        0x01,0x00,0x01,0x00,0x3F,0xF8,0x01,0x00,0x01,0x00,0x01,0x00,0xFF,0xFE,0x00,0x00,/*"尘",30*/
    };
    const unsigned char hz_yang PROGMEM[] ={
        0x10,0x00,0x11,0xF8,0x10,0x10,0x10,0x20,0xFC,0x40,0x10,0x80,0x11,0xFE,0x14,0x92,
        0x18,0x92,0x30,0x92,0xD1,0x12,0x11,0x22,0x12,0x22,0x14,0x42,0x50,0x94,0x21,0x08,/*"扬",31*/
    };
    const unsigned char hz_sha PROGMEM[] ={
        0x00,0x40,0x20,0x40,0x10,0x40,0x11,0x48,0x81,0x44,0x42,0x42,0x42,0x42,0x14,0x48,
        0x10,0x48,0x20,0x48,0xE0,0x10,0x20,0x10,0x20,0x20,0x20,0x40,0x21,0x80,0x06,0x00,/*"沙",32*/
    };
    const unsigned char hz_qiang PROGMEM[] ={
        0x00,0x00,0xF9,0xFC,0x09,0x04,0x09,0x04,0x09,0xFC,0x78,0x20,0x40,0x20,0x43,0xFE,
        0x42,0x22,0x7A,0x22,0x0B,0xFE,0x08,0x20,0x08,0x24,0x08,0x22,0x57,0xFE,0x20,0x02,/*"强",33*/
    };
    const unsigned char hz_wu PROGMEM[] ={
        0x3F,0xF8,0x01,0x00,0x7F,0xFE,0x41,0x02,0x9D,0x74,0x01,0x00,0x1D,0x70,0x04,0x00,
        0x0F,0xE0,0x14,0x40,0x03,0x80,0x1C,0x70,0xE2,0x0E,0x0F,0xE0,0x04,0x20,0x18,0x60,/*"雾",34*/
    };
    const unsigned char hz_mai PROGMEM[] ={
        0x3F,0xF8,0x01,0x00,0x7F,0xFE,0x41,0x02,0x9D,0x74,0x30,0x00,0xCB,0xFC,0x2D,0x24,
        0x31,0xFC,0xC9,0x24,0x15,0xFC,0x64,0x20,0x0D,0xFC,0x34,0x20,0xC5,0xFE,0x18,0x00,/*"霾",35*/
    };
    const unsigned char hz_feng PROGMEM[] ={
        0x00,0x00,0x3F,0xF0,0x20,0x10,0x20,0x10,0x28,0x50,0x24,0x50,0x22,0x90,0x22,0x90,
        0x21,0x10,0x21,0x10,0x22,0x90,0x22,0x92,0x24,0x4A,0x48,0x4A,0x40,0x06,0x80,0x02,/*"风",36*/
    };
    const unsigned char hz_ju PROGMEM[] ={
        0x00,0x00,0x7C,0xF8,0x44,0x88,0x44,0xF8,0x44,0x88,0x4C,0xF8,0x6C,0x88,0x54,0xF8,
        0x54,0x88,0x55,0xFC,0x6C,0x00,0x44,0x50,0x44,0x88,0x42,0x02,0x41,0xFE,0x80,0x00,/*"飓",37*/
    };
    const unsigned char hz_re PROGMEM[] ={
        0x10,0x40,0x10,0x40,0x10,0x40,0xFD,0xF8,0x10,0x48,0x10,0x48,0x1C,0xC8,0x30,0x48,
        0xD0,0xAA,0x10,0xAA,0x51,0x06,0x22,0x02,0x00,0x00,0x48,0x88,0x44,0x44,0x84,0x44,/*"热",38*/
    };
    const unsigned char hz_dai PROGMEM[] ={
        0x09,0x20,0x09,0x20,0x7F,0xFC,0x09,0x20,0x09,0x20,0x00,0x00,0x7F,0xFE,0x41,0x02,
        0x81,0x04,0x1F,0xF0,0x11,0x10,0x11,0x10,0x11,0x50,0x11,0x20,0x01,0x00,0x01,0x00,/*"带",39*/
    };
    const unsigned char hz_long PROGMEM[] ={
        0x04,0x20,0x04,0x10,0x04,0x10,0x04,0x00,0xFF,0xFE,0x04,0x80,0x04,0x88,0x04,0x88,
        0x04,0x90,0x08,0xA0,0x08,0xC0,0x10,0x82,0x11,0x82,0x22,0x82,0x44,0x7E,0x80,0x00,/*"龙",40*/
    };
    const unsigned char hz_juan PROGMEM[] ={
        0x01,0x00,0x11,0x10,0x09,0x20,0x3F,0xF8,0x02,0x00,0x02,0x00,0x7F,0xFC,0x08,0x20,
        0x10,0x10,0x2F,0xE8,0xC8,0x26,0x08,0x20,0x08,0xA8,0x08,0x48,0x08,0x08,0x07,0xF8,/*"卷",41*/
    };
    const unsigned char hz_ssd PROGMEM[] ={
        0x60,0x00,0x91,0xF4,0x96,0x0C,0x6C,0x04,0x08,0x04,0x18,0x00,0x18,0x00,0x18,0x00,
        0x18,0x00,0x18,0x00,0x18,0x00,0x08,0x00,0x0C,0x04,0x06,0x08,0x01,0xF0,0x00,0x00,/*"℃",42*/
    };
    const unsigned char hz_yan PROGMEM[] ={
        0x10,0x00,0x13,0xFE,0x12,0x02,0x16,0x22,0x5A,0x22,0x52,0x22,0x53,0xFE,0x92,0x22,
        0x12,0x22,0x12,0x52,0x12,0x4A,0x2A,0x8A,0x27,0x02,0x42,0x02,0x43,0xFE,0x82,0x02,/*"烟",43*/

    };/*"烟",43*/
    const unsigned char hz_tai PROGMEM[] ={
        0x02,0x00,0x02,0x00,0x04,0x00,0x08,0x20,0x10,0x10,0x20,0x08,0x7F,0xFC,0x20,0x04,0x00,
        0x00,0x1F,0xF0,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,/*"台",44*/
    };/*"台",44*/
    const unsigned char hz_ye PROGMEM[] ={
        0x02,0x00,0x01,0x00,0xFF,0xFE,0x08,0x80,0x08,0x80,0x10,0xF8,0x11,0x08,0x31,0x48,0x52,
        0x28,0x95,0x10,0x11,0x10,0x10,0xA0,0x10,0x40,0x10,0xA0,0x11,0x18,0x16,0x06,
        };/*"夜",45*/
    
    const unsigned char hz_wan PROGMEM[] ={
        0x00,0x80,0x00,0x80,0x79,0xF8,0x4A,0x08,0x4C,0x10,0x4B,0xFC,0x4A,0x44,0x7A,0x44,0x4A,
        0x44,0x4B,0xFC,0x48,0xA0,0x48,0xA0,0x79,0x22,0x49,0x22,0x02,0x1E,0x04,0x00,
    };/*"晚",46*/

struct FNT_HZ // 汉字字模数据结构
{
  char  Index[4];	// 汉字内码索引,如"中",在UTF-8编码下，每个汉字占3个字节，第四个是结束符0
  const unsigned char* hz_Id;  // 点阵码数据，存放内码后对应的点阵序列每个字需要32个字节的点阵序列
  unsigned char hz_width;    //序列长度
};

PROGMEM const FNT_HZ hanzi[] =
{
    {"周", hz_zhou,16},{"一", hz_mon,16},{"二", hz_tue,16},{"三", hz_wed,16},{"四", hz_thu,16},
    {"五", hz_fri,16},{"六", hz_sat,16},{"日", hz_sun,16},{"多", hz_duo,16},{"云", hz_yun,16},
    {"晴", hz_qing,16},{"间", hz_jian,16},{"大", hz_da,16},{"部", hz_bu,16},{"阴", hz_yin,16},
    {"阵", hz_zhen,16},{"雨", hz_yu,16},{"雷", hz_lei,16},{"伴", hz_ban,16},{"有", hz_you,16},
    {"冰", hz_bing,16},{"雹", hz_bao,16},{"小", hz_xiao,16},{"中", hz_zhong,16},{"暴", hz_bao1,16},
    {"特", hz_te,16},{"冻", hz_dong,16},{"夹", hz_jia,16},{"雪", hz_xue,16},{"浮", hz_fu,16},
    {"尘", hz_chen,16},{"扬", hz_yang,16},{"沙", hz_sha,16},{"强", hz_qiang,16},{"雾", hz_wu,16},
    {"霾", hz_mai,16},{"风", hz_feng,16},{"飓", hz_ju,16},{"热", hz_re,16},{"带", hz_dai,16},
    {"龙", hz_long,16},{"卷", hz_juan,16},{"℃", hz_ssd,16},{"烟",hz_yan,16},{"台",hz_tai,16},
    {"夜",hz_ye,16},{"晚",hz_wan,16},
    // {"动",hz_dong1,16},{"止",hz_zhi,16}
   
};