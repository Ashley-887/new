#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]="abc";
    int len=my_strlen(arr);
    printf("%d\n",len);
    return 0;
}
int my_strlen(char*str)
{
    int count=0;
    while(*str !='\0')
    {
        count++;
        str++;//找下一个字符
    }
    return count;
}
