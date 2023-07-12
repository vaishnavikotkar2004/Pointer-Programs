// Interchange two numbers...using pointer
#include<stdio.h>
int main()
{
 int *a,*b,x,y,t;
 printf("enter first variable");
 scanf("%d",&x);
 printf("enter second variable");
 scanf("%d",&y);
 a=&x;
 b=&y;
 t=*a;
 *a=*b;
 *b=t;
  printf("\n first value=%d",*a);
  printf("\n second value=%d",*b);
}
