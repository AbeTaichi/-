#include <stdio.h>

int main(void)
{
    int a;
    int b;
    printf("0以外の整数a\n");
    scanf("%d",&a);
    printf("aより大きい整数b\n");
    scanf("%d",&b);
    
    if(a == 0)
    {
        printf("無効な整数");
    }
    else if (b>a)
    {
        double m;
        m = (double)b / (double)a;
        printf("b/a = %f",m);
    }
    else
    {
        printf("無効な整数");
    }

    return 0;
}