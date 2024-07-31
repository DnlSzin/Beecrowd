#include<stdio.h>
int main()
{
int S,h,m,s,Div;
 scanf("%d",&S);
Div=S;
h=Div/3600;
Div=Div%3600;
m=Div/60;
Div=Div%60;
s=Div;
 printf("%d:%d:%d\n",h,m,s);
    return 0;
}
