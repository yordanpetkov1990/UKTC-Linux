#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,S,p,P;
int isValid;
printf("a=");
scanf("%f",&a);
printf("b=");
scanf("%f",&b);
printf("c=");
scanf("%f",&c);
isValid=a>0 && b>0 && c>0 && a + b > c && a+c>b && b+c>a;
if(isValid)
{
P=a+b+c;
p=P / 2.0;
S=(float)sqrt(p*(p-a)*(p-b)*(p-c));
printf("P=%.2f\n",P);
printf("S=%.2f\n",S);
}
else
{
printf("Invalid triangle\n");
}
return 0;
}
