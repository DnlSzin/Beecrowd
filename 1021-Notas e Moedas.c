#include<stdio.h>
#include<math.h>
int main()
{
double V,n;
int a,b;
 scanf("%lf",&n);
 a = (round(n*100));
 printf("NOTAS:\n");
 printf("%d nota(s) de R$ 100.00\n",a/10000); 
a = a%10000;
 printf("%d nota(s) de R$ 50.00\n",a/5000); 
a = a%5000;
 printf("%d nota(s) de R$ 20.00\n",a/2000); 
a = a%2000;
 printf("%d nota(s) de R$ 10.00\n",a/1000); 
a = a%1000;
 printf("%d nota(s) de R$ 5.00\n",a/500); 
a = a%500;
 printf("%d nota(s) de R$ 2.00\n",a/200);
a = a%200;
 printf("MOEDAS:\n");
 printf("%d moeda(s) de R$ 1.00\n",a/100);  
a = a%100;
b = a;
 printf("%d moeda(s) de R$ 0.50\n",b/50);
b = b%50;
 printf("%d moeda(s) de R$ 0.25\n",b/25);
b = b%25;
 printf("%d moeda(s) de R$ 0.10\n",b/10);
b = b%10;
 printf("%d moeda(s) de R$ 0.05\n",b/5);
b = b%5;
 printf("%d moeda(s) de R$ 0.01\n",b/1);
    return 0;
}
