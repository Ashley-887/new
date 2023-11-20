#include <stdio.h>
char sign(int n){
    if(n==0){
        return '=';
    }
    if(n>=0){
        return '+';
    }
    else{
        return '-';
    }
}
int main(){
   int n;
   scanf("%d",&n);
   printf("%c",sign(n));
   return 0;
}
