#include<stdio.h>
void main()
{
   int a,b,c;
   printf("Enter first angle:");
   scanf("%d",&a);

   printf("Enter second angle:");
   scanf("%d",&b);

   c=180-(a+b);

   printf("Third angle : %d",c);
}
