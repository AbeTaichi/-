#include <stdio.h>
#include <math.h>

int quadratic()
{
	double a;
	double b;
	double c;
	
	double r1;
	double r2;

	printf("a=");
	scanf("%lf",&a);
	printf("b=");
	scanf("%lf",&b);
    printf("c=");
    scanf("%lf",&c);
    
    double D = b*b - 4*a*c;
    
    if (a==0)
    {
    printf("aは0以外の整数を入力してください\n");
    }
    
    else
    {
        if (D<0)
        {
            printf("実数解なし\n");
        }
    
        if (D==0)
        {
            r1 = (-b)/(2*a);
            printf("実数解は重解 %lf\n",r1);
        }
    
        if (D>0)
        {
            r1 = (-b+sqrt(D))/(2*a);
            r2 = (-b-sqrt(D))/(2*a);
            printf("実数解は２つ %lf %lf\n",r1,r2);
        }
    }
    
	return 0;
}

int main()
{
    printf("こんにちは！今日は二次方程式を使ってみよう！");
    quadratic();
    
    printf("おめでとう！次は、aをゼロにしてみませんか？");
    quadratic();
}