#include<stdio.h>
int ternery(int a[],int i,int j,int key)
{
if(i<=j)
{
int mid1=i+(j-i)/3;
int mid2=mid1+(j-i)/3;
if(a[mid1]==key)
{return mid1;}
if(a[mid2]==key)
{return mid2;}
if(key<a[mid1])
{return ternery(a,i,mid1-1,key);}
if(key>a[mid2])
{return ternery(a,mid1+1,j,key);}
return ternery(a,mid1+1,mid2-1,key);
}
return -1;
}
void main()
{
int r,a[10],key,i,b;
clrscr();
printf("\nEnter the no.of elements:");
scanf("%d",&r);
printf("\nEnter the elements:");
for(i=0;i<r;i++)
scanf("%d",&a[i]);
printf("Enter the search key:");
scanf("%d",&key);
b=ternery(a,0,r,key);
if(b>=0)
 {printf("Element found at location %d",b);}
else
 {printf("\nElement not found!");}
}