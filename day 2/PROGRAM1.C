#include<stdio.h>
void main()
{int i,sum=0;
clrscr();
for(i=1;i<1000;i++)
{
if((i%3==0)||(i%5==0))
{
sum=sum+i;}  }
printf("Sum:%d\n",sum);
}