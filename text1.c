#include<stdio.h>
int main()
{
    char s[255]={0};
    int i;
    scanf("%d",&s[i]);
    for(i=0;i<=255;i++)
    {
        s[i]=getchar();
        if(s[i]=='.')
        break;
    }
    for(i=0;i<=255;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-32;
    }
    for(i=0;i<255;i++)
    putchar(s[i]);
    return 0;
}
