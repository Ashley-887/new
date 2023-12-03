#include<stdio.h>
//共用体
// union item//存储空间取决于最大变量，重叠占用内存空间
// {
//     int n;
//     float x;
//     char c;
// }code;

// //初始化，与第一个变量类型一致
// union item code={100};


// code.m=123;
// code.x=123.45;
// printf("%d",code.m)//code.m已被覆盖，只有.x的长度