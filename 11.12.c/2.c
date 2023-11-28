// #include <stdio.h>
// #include <math.h>

// int main() {
//     int num_of_real_numbers;
//     scanf("%d", &num_of_real_numbers);

//     printf("\n", num_of_real_numbers);

//     float real_number;
//     for (int i = 0; i < num_of_real_numbers; ++i) {
//         scanf("%f", &real_number);
//         printf("%.3f\n", fabsf(real_number));
        
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int n;
    float i,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f",&a);
        if(a>=0)
        {
            printf("%.3f\n",a);
        }
            else
            {
                b=-a;
                printf("%.3f\n",b);
            }
    }

    return 0;
}
