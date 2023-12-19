//三个整数排序 由小到大（冒泡排序 选择排序）
//不改变a，b，c具体数值
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("largest %d\n",(a>b?a:b)>c?(a>b?a:b):c);
    printf("smallest %d",(a<b?a:b)<c?(a<b?a:b):c);
    return 0;
}

//if语句
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }
    printf("从小到大排序：%d %d %d\n", a, b, c);
    return 0;
}

//使用数组
#include <stdio.h>
int main() {
    int nums[3];
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

    // 使用冒泡排序算法
    //每相邻两个数字比较后按序排列
            //排列length-1次
    for (int i = 0; i < 3-1; ++i) {
        for (int j = 0; j <3-1-i; ++j) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    printf("从小到大排序：%d %d %d\n", nums[0], nums[1], nums[2]);
    return 0;
}

//选择排序 
//第一个数与后面的数依次排序后排列，再第二个数与后面排序
#include<stdio.h>
int main()
{
    int nums[10]={1,3,5,6,7,2,4,0,9,8};
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    return 0;
}

