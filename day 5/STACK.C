#include<stdio.h>
#define max 10
int stack[50],top=-1;
void push(int x)
{
if(top==max-1)
{printf("\nStack is full!");
return; }
top++;
stack[top]=x;
printf("%d is pushed in the stack\n",x);
}
int pop()
{
int x;
if(top==-1)
{printf("Stack is empty!");
return 0;   }
x=stack[top];
printf("%d is popped!");
top--;
return x;}
void main()
{
int ch,x;
clrscr();
do{
printf("\nEnter test case(1 for push,2 for pop):");
scanf("%d",&ch);
switch(ch)
{case 1:scanf("%d",&x);
	push(x);
	break;
 case 2:pop();
	break;
}
}while(ch!=3);
}

