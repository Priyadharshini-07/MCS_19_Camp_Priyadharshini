#include<stdio.h>
void main()
{int a[10],n,l,h,mid,x,i,j,temp;
clrscr();
printf("\nEnter the no.of elements:");
scanf("%d",&n);
printf("\nEnter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{if(a[i]<a[j])
{temp=a[i];
a[i]=a[j];
a[j]=temp;}}}
printf("\nEnter the element to be searched:");
scanf("%d",&x);
l=0;
h=n-1;
mid=(l+h)/2;
while(l<=h)
{
if(a[mid]<x)
l=mid+1;
else if(a[mid]==x)
{printf("%d found at location %d",x,mid+1);
break;
}
else
h=mid-1;
mid=(l+h)/2;
}
if(l>h)
{printf("\nElement not found!");
}
}