#include<stdio.h>
int main()
{int a,b,flag,i;
clrscr();
printf("\tFINDING PRIME NUMBERS\t\n");
printf("\nEnter the range:");
scanf("%d%d",&a,&b);
printf("\nPrime numbers between %d and %d are:",a,b);
while(a<b)
{flag=0;
    for(i=2;i<=a/2;i++)
     {if(a%i==0)
	{flag=1;
	 break;}
     }
   if(flag==0)
      printf("%d\n",a);

   a++;
}
return 0;
}