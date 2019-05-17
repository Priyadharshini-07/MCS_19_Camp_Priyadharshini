#include<stdio.h>
void main()
{
int i,n,a[10],temp,j;
printf("\nEnter n:");
scanf("%d",&n);
printf("\nenter the elments:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{temp=a[i];
j=i-1;
while(temp<a[j] && j>=0)
{a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
printf("\nSorted order:");
for(i=0;i<n;i++)
printf("%d\n",a[i]);

}
