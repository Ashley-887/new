#include<stdio.h>
#include<stdlib.h>

void menu()
{
    printf("         \n");
    printf("         \n");
    printf("1.月日历\n");
    printf("2.星座\n");
    printf("3.天干地支 生肖 节气\n");
}

// 判断是否为闰年
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // 是闰年
    } else {
        return 0; // 不是闰年
    }
}

// 获取某月的天数
int getDaysInMonth(int year, int month) {
    const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year)) {
        return 29; // 闰年2月为29天
    } else {
        return daysInMonth[month];
    }
}



void printCalendar(int year, int month) {
    int dayOfWeek, i;

    dayOfWeek = (year - 1 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 +
                (13 * (month + 1)) / 5) %
               7;

    printf("日 一 二 三 四 五 六\n");

    for (i = 0; i < dayOfWeek; i++) {
        printf("   ");
    }


    for (i = 1; i <=getDaysInMonth(year,month) ; i++) {
        printf("%2d ", i);

        if ((dayOfWeek + i) % 7 == 0) {
            printf("\n");
        }


    }

    if ((dayOfWeek + i - 1) % 7 != 0) {
        printf("\n");
    }
}


void findZodiac(int day, int month) {
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("白羊座 (Aries)\n");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("金牛座 (Taurus)\n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("双子座 (Gemini)\n");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("巨蟹座 (Cancer)\n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("狮子座 (Leo)\n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("处女座 (Virgo)\n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("天秤座 (Libra)\n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("天蝎座 (Scorpio)\n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("射手座 (Sagittarius)\n");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("摩羯座 (Capricorn)\n");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("水瓶座 (Aquarius)\n");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("双鱼座 (Pisces)\n");
    } else {
        printf("输入日期无效\n");
    }
}


void findHeavenlyStemEarthlyBranch(int year, int month, int day) {
    // 天干
    char *heavenlyStems[] = {"甲", "乙", "丙", "丁", "戊", "己", "庚", "辛", "壬", "癸"};

    // 地支
    char *earthlyBranches[] = {"子", "丑", "寅", "卯", "辰", "巳", "午", "未", "申", "酉", "戌", "亥"};

    // 计算天干地支
    int stemIndex = (year - 1) % 10;
    int branchIndex = (year - 1) % 12;

    // 输出结果
    printf("天干地支：%s%s\n", heavenlyStems[stemIndex], earthlyBranches[branchIndex]);

    // 输出生肖（地支）
    printf("生肖：%s\n", earthlyBranches[branchIndex]);

    // 输出节气，以立春为一年的开始
    int solarTermsIndex = (month - 1) * 2 + (day >= 4); // 超过4号算下一个节气
    char *solarTerms[] = {"立春", "雨水", "惊蛰", "春分", "清明", "谷雨",
                          "立夏", "小满", "芒种", "夏至", "小暑", "大暑",
                          "立秋", "处暑", "白露", "秋分", "寒露", "霜降",
                          "立冬", "小雪", "大雪", "冬至", "小寒", "大寒"};

    // 输出节气
    printf("节气：%s\n", solarTerms[solarTermsIndex]);
}

int main()
{

        int input,year,month,day;
do{
            menu();
            printf("请选择：");
            scanf("%d",&input);
    switch(input)
    {
        case 1:scanf("%d %d",&year,&month);
            printf("%d的%d月的日历:\n",year,month);
            printCalendar(year,month);
        case 2:
            scanf("%d %d",&day,&month);
            printf("%d",day,month);
            findZodiac(day,month);
        case 3:
            scanf("%d %d %d",&year,&month,&day);
            printf("%d",year,month,day);
            findHeavenlyStemEarthlyBranch(year,  month,  day);

    }
   }while(input);
   return 0;
}

