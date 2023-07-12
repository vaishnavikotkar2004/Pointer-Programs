// Addition of two numbers...using pointer
#include<stdio.h>
int main()
{
 int a,b,*x,*y,add;
 printf("enter two variables");
 scanf("%d%d",&a,&b);
 x=&a;
 y=&b;
 add=*x+*y;
 printf("\n addition:=%d",add);
}
