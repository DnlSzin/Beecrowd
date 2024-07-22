#include<stdio.h>
int main()
{
double a,b,c,a1,a2,a3,a4,a5,pi=3.14159;
    scanf("%lf %lf %lf",&a,&b,&c);
a1=(a*c)/2;
a2=(c*c*pi);
a3=((a+b)*c)/2;
a4=(b*b);
a5=(a*b);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",a1,a2,a3,a4,a5);
    return 0;
}
