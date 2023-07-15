// Accept number using pointer and display factorial...
#include<stdio.h>
int main()
{
 int n,i,s=1,*x;
 printf("enter number");
 scanf("%d",&n);
 x=&n;
 for(i=1;i<=*x;i++)
 s=s*i;
 printf("\n factorial=%d",s);
}
