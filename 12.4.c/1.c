#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j,sum;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        sum+=arr[i][i];
    }
    printf("%d",sum);
    return 0;
}