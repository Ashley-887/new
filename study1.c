//Notice1:指针是什么
//指针就是地址，地址就是编号，指针是内存单元里的编号
//通常指针是指针变量，指针变量是储存地址的变量
#include<stdio.h>
int main()
{
    int a=10;//a是整型，占用4个字节的空间
             //取地址得到的是第1个字节的地址
             //1个字节(byte)对应1个地址
    int*pa=&a;//pa就是指针变量，&将a的地址取出存到pa中
    return 0;
}

//Notice2:指针和指针类型
#include<stdio.h>
int main()
{
    char*pa=NULL;
    short*pb=NULL;
    int*pc=NULL;
    double*pd=NULL;
    //64位环境，得到的是8个字节
    printf("%d\n",sizeof(pa));
    printf("%d\n",sizeof(pb));
    printf("%d\n",sizeof(pc));
    printf("%d\n",sizeof(pd));

    //指针类型决定了指针+-操作时，跳过几个字节
    //决定指针的步长   
    int a=0x11223344;
    int*pa=&a;
    char*pc=(char*)&a;

    printf("pa=%p\n",pa);
    printf("pa+1=%p\n",pa+1);
    //加4个字节
    
    printf("pc=%p\n",pc);
    printf("pc+1=%p\n",pc+1);
    //加1个字节
    
    return 0;
}




