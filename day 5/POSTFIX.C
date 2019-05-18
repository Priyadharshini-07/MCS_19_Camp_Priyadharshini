#include<stdio.h>
#include<conio.h>
char stack[200];
int top=-1;
int precedence(char);
char pop();
void push(char);
int isoperator(char);
void intopo(char in[],char po[]);
void main()
{char in[50],po[50];
printf("\nEnter the expression:");
gets(in);
intopo(in,po);
printf("\nPostfix expression:%s",po);
getch();
}
void intopo(char in[50],char po[50])
{
char x,t;
int i,j;
push('(');
j=0;i=0;
t=in[i];
while(t!='\0')
{
if(t=='(')
{push(t);}
else if(isdigit(t)||isalpha(t))
{po[j]=t;
j++;}
else if(isoperator(t)==1)
{x=pop();
while((isoperator(x)==1)&&(precedence(x)>=precedence(t)))
{po[j]=x;
j++;
x=pop();}
push(x);
push(t);
}
else if(t==')')
{x=pop();
while(x!='(')
{po[j]=x;j++;
x=pop();}}
else
{printf("\nInvalid expression");
getch();
exit(1);}
i++;
t=in[i];
}
if(top<0)
{
printf("\nInvalid expression");
getch();
exit(1);}
po[j]='\0';
}
void push(char t)
{
int size=50;
if(top>=size-1)
printf("\nStack overflow!");
else
{top=top+1;
stack[top]=t;}
}
char pop()
{
char t;
if(top<0)
{printf("\nStack underflow!");
getch();
exit(1);}
else
{t=stack[top];
top=top-1;
}
return 0;
}

int isoperator(char a)
{
if(a=='^'||a=='*'||a=='/'||a=='+'||a=='-')
return 1;
else
return 0;
}
int precedence(char a)
{
if(a=='^')
return(3);
else if(a=='*'||a=='/')
return(2);
else if(a=='+'||a=='-')
return(1);
else
return(0);
}