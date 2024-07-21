#include<stdio.h>
int main()
{
char nome;
double a,b; 
 scanf("%s %lf %lf",&nome,&a,&b);
 printf("TOTAL = R$ %.2lf\n",((15*b/100)+a));
    return 0;
}
