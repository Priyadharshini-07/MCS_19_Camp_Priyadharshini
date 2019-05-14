#include<stdio.h>
int main()
{char s[100];
int sum=0,count=0;
clrscr();
printf("\nEnter the string:");
gets(s);
while(s[sum]!='\0')
{if(s[sum]=='a'|| s[sum]=='e'|| s[sum]=='i'|| s[sum]=='o'|| s[sum]=='u'|| s[sum]=='A'|| s[sum]=='E'|| s[sum]=='I'|| s[sum]=='O'|| s[sum]=='U')
 { count++; }
sum++;
}
printf("No.of vowels in the string %s is %d",s,count);
return 0;
}