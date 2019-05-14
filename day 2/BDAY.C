#include<stdio.h>
int main()
{int a[10],t,b[10],i;
clrscr();
printf("\nEnter the test case:");
scanf("%d",&t);
printf("\nEnter the no.of friends:");
for(i=0;i<t;i++)
scanf("%d",&a[i]);
printf("\nEnter the no.of chocolates in a pack:");
for(i=0;i<t;i++)
scanf("%d",&b[i]);
for(i=0;i<t;i++)
{if(b[i]%a[i]==0)
{printf("Yes!");
}
else
{printf("No!");}
}
return 0;
}