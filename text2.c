#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10]={"hi"},s2[10]={"li"};
    int i;
    while(s2[i]!='\0')
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
    printf("%s",s1);
    return 0;
}

