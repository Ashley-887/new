//平方数 一个整数，加上100后是完全平方数，再加上168后也是
//x+100=m^2      
//x+100+168=n^2
//找到m，n的关系，用枚举法给m赋值得n，进而求x
//(m+n)(m-n)=168 i*j=168
//2<=I,j<=84
#include<stdio.h>
int main()
{
    int i,j,m,n,x;
    for(i=2;i<=84;i++){
        if(168%i==0){
          j=168/i;
        }
    }
    m=(i+j)/2;
    n=(i-j)/2;
    printf("x=%d",m^2-100);

    return 0;
}