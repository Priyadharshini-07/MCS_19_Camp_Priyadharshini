#include<stdio.h> ]
#define max 10
int solve(int x)
{
int dp[max];
if(x==0)
  return 1;
if(dp[x]!=-1)
  return dp[x];
return(dp[x]=x*solve(x-1));
}
int fact(int n)
{
int i,dp[max];
dp[0]=1;
for(i=1;i<=n;i++)
{dp[i]=0;}
for(i=1;i<=n;i++)
{dp[i]=dp[i-1]*i;
return dp[i];}
}
int main()
{int ch,n,a,b;
do{
//choice1:tabulation method to find factorial
//choice2:memoization method to find factorial
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{case 1: printf("\nEnter the number:");
	 scanf("%d",&n);
	 a=fact(n);
	 printf("Factorial of %d is %d",n,a);
	 break;
 case 2:printf("\nEnter the number:");
	scanf("%d",&n);
	b=solve(n);
	printf("Factorial of %d is %d",n,b);
	break;
 case 3:exit(1);break;
 }}while(ch!=3);

return 0;
}