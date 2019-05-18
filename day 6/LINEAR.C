#include<stdio.h>
void main()
{int a[10],n,i,x,b=-1,flag=0;
clrscr();
printf("\nEnter the no.of elements:");
scanf("%d",&n);
printf("\nEnter the elements to be searched:");
scanf("%d",&x);
printf("\nEnter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{if(x==a[i])
flag=1;  }
if(flag==1)
{//printing the size of the array if element found
printf("%d\n",n);
}
else
{//printing -1 if element not found
printf("\n%d",b);}
}