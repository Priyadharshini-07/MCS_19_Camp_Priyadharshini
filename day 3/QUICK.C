#include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int partition(int a[10],int low,int high)
{

int j;
int pivot=a[high];
int i=low-1;
for(j=low;j<=high-1;j++)
{if(a[j]<=pivot)
{i++;
swap(&a[i],&a[j]);}
}
swap(&a[i+1],&a[high]);
return(i+1);
}
void quick(int a[],int low,int high)
{
if(low<high)
{
int p=partition(a,low,high);
quick(a,low,p-1);
quick(a,p+1,high);}
}
void print(int a[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
int main()
{int i,n,a[10];
clrscr();
printf("\nEnter n:");
scanf("%d",&n);
printf("\nEnter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quick(a,0,n-1);
printf("\nSorted order:");
print(a,n);
return 0;
}