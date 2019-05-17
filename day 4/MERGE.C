#include<stdio.h>
int a[10],b[10];
void merge(int l,int m,int h)
{
int l1,l2,i;
for(l1=l,l2=m+1,i=l;l1<=m&&l2<=h;i++)
{
if(a[l1]<=a[l2])
   b[i]=a[l1++];
else
   b[i]=a[l2++];
}
while(l1<=m)
  b[i++]=a[l1++];
while(l2<=h)
  b[i++]=a[l2++];
for(i=l;i<=h;i++)
  a[i]=b[i];
}
void sort(int l,int h)
{
int m;
if(l<h)
{m=(l+h)/2;
sort(l,m);
sort(m+1,h);
merge(l,m,h);
}
else
{return;}
}
void main()
{
int n,i;
clrscr();
printf("\nEnter n:");
scanf("%d",&n);
printf("\nEnter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

sort(0,n);

printf("\nSorted order:");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}