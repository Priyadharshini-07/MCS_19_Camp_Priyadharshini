#include<stdio.h>
void main()
{
int a,b,c;
printf("\nEnter two numbers:");
scanf("%d%d",&a,&b);
c=a-b;
if(c<0)
{c=c*(-1);
printf("\nAbsolute difference between %d and %d are %d",a,b,c);
}
else
{  printf("\nAbsolute difference between %d and %d are %d",a,b,c);
}
}