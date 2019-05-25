#include<stdio.h>
int fibonacci(int n)
{
if(n<=1)
return n;
return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{int n;
printf("\nEnter n:");
scanf("%d",&n);
printf("%dth term in fibonnaci series is %d",n,fibonacci(n));
getch();
return 0;
}