#include<stdio.h>
int main()
{
int D,a,m,d,Div;
 scanf("%d",&D);
Div=D;
a=Div/365;
Div=Div%365;
m=Div/30;
Div=Div%30;
d=Div;
 printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
    return 0;
}
