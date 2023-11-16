#include<stdio.h>
int main()
{
    char input;
    scanf("%c",&input);
    if(input>='a'&&input<='z')
    {
        char result=input+3;
        if(result>'z')
        {
            result='a'+(result-'z'-1);
        }
        printf("%c",result);
    }
    return 0;
}