#include<stdio.h>
#define max 50
int front=-1,rear=-1;
int queue[max];
void insert()
{
int t;
if(rear==max-1)
printf("\nQueue overflow!");
else
{if(front==-1)
front=0;
printf("\nEnter the element to be inserted:");
scanf("%d",&t);
rear=rear+1;
queue[rear]=t;
printf("%d is inserted in the queue",t);
}
}
void delet()
{
if(front==-1||front>rear)
{printf("\nQueue underflow!");
return;
}
else
{
printf("\n%d is deleted from the queue",queue[front]);
front=front+1;
}
}
void display()
{int i;
if(front==-1)
printf("\nQueue is empty!");
else
{printf("\nElements in queue:\n");
for(i=front;i<=rear;i++)
printf("%d\n",queue[i]);     }
}
void main()
{int ch;
clrscr();
do
{printf("\nEnter your choice\n(1.Insertion\t2.Deletion\t3.Display)");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
       break;
case 2:delet();
       break;
case 3:display();
       break;
case 4:exit(1);break;
}
}while(ch!=4);
}\