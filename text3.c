//在两个字符数组中实现字符串连接
//把s2数组中值为'\0'的元素前的所有字符拷贝到s1末尾
#include<stdio.h>
int main()
{
   char s1[10]={"hi"},s2[10]={"zhao"};
   int i,j;
   while(s1[i]!='\0')
     i++;
   while(s2[j]!='\0')
     s1[i++]=s2[j++];
     s1[i]='\0';
     puts(s1);
     //printf("%s",s1);
}
