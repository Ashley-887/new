#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    int last=findLastPerson(n,m);
    printf("%d",last);
    return 0;
}

int findLastPerson(int n,int m)
{
    int o[100];
    int count=0;
    int index=0;
    for(int i=0;i<n;i++){
        o[i]=1;
    }
    while(count<n-1){
        int step=0;
        while(step<m){
            if(o[index]==1){
                step++;
            }
            index=(index+1)%n;
        }
        o[(index+n-1)%n]=0;
        count++;
    }
    for(int i=0;i<n;i++){
        if(o[i]==1){
            return i+1;
        }
    }
    return -1;
}