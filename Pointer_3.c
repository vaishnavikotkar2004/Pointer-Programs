// Accept number and display cube using pointer...
#include<stdio.h>
int main()
{
 int a,*x,c;
 printf("enter number");
 scanf("%d",&a);
 x=&a;
 c=*x**x**x;
 printf("\n cube=%d",c);
}
