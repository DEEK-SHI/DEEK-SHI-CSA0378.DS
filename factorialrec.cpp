#include<stdio.h>
int facto(int n);
int main()
{
 int facto(int n),num;
 printf("enter the number to find the factorial of a number");
 scanf("%d",&num);
 int facto(int n);
 printf("factorial of %d is %d",num,facto(num));
 return 0;
}
int facto(int n)
{
 if (n==0)
 return 1;
 if(n>1)
 return (n*facto(n-1));
}
