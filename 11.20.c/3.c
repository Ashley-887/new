#include<stdio.h>
#include <math.h>

double d(int x1, int y1, int x2, int y2) {
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return distance;
}

int main() {
    int x1, y1, x2, y2;
    double distance;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    distance = d(x1, y1, x2, y2);
    printf("%.2lf",distance);
    return 0;
}

// #include<math.h>
// int main()
// {
//     int x1,x2,y1,y2;
//     double s;
//     scanf("%d %d\n",&x1,&y1);
//     scanf("%d %d\n",&x2,&y2);
//     s=d(x1,x2,y1,y2);
//     printf("%.2f",s);
//     return 0;
// }

// double d(int x1,int x2,int y1,int y2)
// {
//     double s=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
//     return s;
// }