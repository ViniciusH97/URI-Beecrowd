#include<stdio.h>

int main()
{
    
    double a, b, c, m, soma;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    m = (a*2+b*3+c*5)/10.0;
    
    printf("MEDIA = %.1lf\n", m);
    
    return 0;
}
printf