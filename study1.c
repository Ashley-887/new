//结构是一些值的集合，复杂对象的描述使用结构体
//描述人
#include<stdio.h>
struct people//内存空间是成员字节之和，分别储存
{
    char name[20];
    char tele[12];
    char sex[5];
    int high;        
}p1,p2;//p1,p2是使用structure创建的全局变量，一般不用

struct stu
{
    struct people p;//结构体内有结构体
    int num;
    float f;
};

int main()
{
    struct people p1={"张三","15634788989","男","181"};
    //p1是结构体变量(局部变量)
    struct stu s={{"张三","15634788989","男","181"},100,3.14f};
    printf("%s %s %s %d\n",p1.name,p1.tele,p1.sex,p1.high);
    printf("%s %s %s %d %d %f\n",s.p.name,s.p.tele,s.p.sex,s.p.high,s.num,s.f);
    return 0;
}

