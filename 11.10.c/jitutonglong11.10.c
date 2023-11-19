// #include<stdio.h>
// int main(void)
// {
//     int heads,feet,i,j;
//     printf("请输入鸡和兔的总头数,总脚数:\n");
//     scanf("%d %d",&heads,&feet);
//     for(i=0;i<=heads;i++);//枚举鸡
//     {
//         j=heads-i;
        
//             if(2*i+4*j==feet)
//             {
//                 printf("鸡:%d\n兔:%d\n",i,j);
//             }
//             // else
//             // {
//             //     printf("-1 -1");
//             // }

        
//     }
//     return 0;
// }
#include <stdio.h>

void findChickenRabbit(int totalHeads, int totalLegs) {
    int chicken, rabbit;
    
    for (chicken = 0; chicken <= totalHeads; chicken++) {
        rabbit = totalHeads - chicken;
        if ((2 * chicken + 4 * rabbit) == totalLegs) {
            printf("鸡的数量：%d，兔的数量：%d\n", chicken, rabbit);
            return;
        }
    }
    
    printf("-1 -1\n");
}

int main() {
    int totalHeads, totalLegs;

    printf("请输入总头数,总脚数:\n");
    scanf("%d %d",&totalHeads,&totalLegs);

    findChickenRabbit(totalHeads, totalLegs);

    return 0;
}
