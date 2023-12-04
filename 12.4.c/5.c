#include<stdio.h>
int main()
{
    int arr[10];
    int sum=0;
    int n=10;
    float average=0.0;
    float variance=0.0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    average=(double)sum/n;
    for(int i=0;i<n;i++){
        variance+=(arr[i]-average)*(arr[i]-average);
    }
    variance /=n;
    printf("%.2f",variance);
    return 0;
}