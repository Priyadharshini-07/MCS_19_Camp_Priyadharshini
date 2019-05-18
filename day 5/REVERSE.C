#include<stdio.h>
#define max 50
int top=-1,t;
char stack[max];
void push(char t)
{
if(full())
{printf("\nStack is full!\n");
return;}
top=top+1;
stack[top]=t;
}
char pop()
{
if(empty())
{printf("\nStack is empty!\n");
return 0;}
t=stack[top];
top=top-1;
return t;
}
int empty()
{if(top==-1)
 return 1;
else
 return 0;
}
int full()
{
if(top==max-1)
 return 1;
else
 return 0;
}
int main()
{int i;
char str[max];
printf("\nEnter the string:");
gets(str);
for(i=0;i<strlen(str);i++)
  push(str[i]);
for(i=0;i<strlen(str);i++)
  str[i]=pop();
printf("\nReversed string:%s",str);
return 0;
}