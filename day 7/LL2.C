#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void create();
void display();
void insbeg();
void inspos();
void insend();
void delpos();
void delend();
void delbeg();
void dellist(struct node**);
int getcount(struct node*);
void search(struct node*,int);
int getnth(struct node*,int);
struct node
{
int info;
struct node* next;
}*st;
void main()
{
int ch;
st=NULL;
clrscr();
printf("\n1.CREATE\n2.DISPLAY\n3.INSERT AT THE BEGINNING\n4.INSERT AT THE END\n5.INSERT AT THE SPECIFIED POSITION\n6.DELETE FROM THE BEGINNING\n7.DELETE AT THE END\8.DELETE FROM THE SPECIFIED POSITION\n9.DELETE ENTIRE LINKEDLIST\n10.COUNT OF NODES IN LL\n11.SEARCH THE ELEMENT IN LINKED LIST\n12.GET NTH NODE IN THE LIST\n13.EXIT\n");
do
{printf("\nEnter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:create();break;
case 2:display();break;
case 3:insbeg();break;
case 4:insend();break;
case 5:inspos();break;
case 6:delbeg();break;
case 7:delend();break;
case 8:delpos();break;
case 9:dellist(&st);break;
case 10:printf("No.of nodes:%d",getcount(st));break;
case 11:search(st,21);break;
case 12:getnth(st,4);break;
case 13:exit(1);break;
}
}while(ch!=9);
}
//to create a linked list
void create()
{
struct node *temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\nOut of memory space!");
exit(0);
}
printf("\nEnter the data:");
scanf("%d",&temp->info);
temp->next=NULL;
if(st==NULL)
{st=temp;}
else
{ptr=st;
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next=temp;}
}
//to display the list elements
void display()
{
struct node *ptr;
if(st==NULL)
{
printf("\nList is empty!");
return;
}
else
{ptr=st;
printf("\nList elements are:");
while(ptr!=NULL)
{
printf("%d->",ptr->info);
ptr=ptr->next;
}             }
}
//insertion at the beggining of the list
void insbeg()
{
struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\nOut of memory space!");
exit(0);
}
printf("\nEnter the data:");
scanf("%d",&temp->info);
temp->next=NULL;
if(st==NULL)
{st=temp;}
else
{
temp->next=st;
st=temp;
}
}
//insertion at the end of the list
void insend()
{
struct node *temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\nOut of memory space!");
exit(0);
}
printf("\nEnter the data:");
scanf("%d",&temp->info);
temp->next=NULL;
if(st==NULL)
{st=temp;}
else
{ptr=st;
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next=temp;}
}
//insertion at the specified position in the linked list
void inspos()
{
struct node *temp,*ptr;
int i,pos;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\nOut of memory space!");
exit(0);
}
printf("\nEnter the position to be inserted:");
scanf("%d",&pos);
printf("\nEnter the data:");
scanf("%d",&temp->info);
temp->next=NULL;
if(pos==0)
{temp->next=st;
st=temp;}
else
{for(i=0,ptr=st;i<pos-1;i++)
{ptr=ptr->next;
if(ptr==NULL)
{printf("\nPosition not found!");
return;}}
temp->next=ptr->next;
ptr->next=temp;}
}
//deletion from the beginning of the list
void delbeg()
{
struct node *ptr;
if(ptr==NULL)
{printf("\nList is empty!");
return;}
else
{ptr=st;
st=st->next;
printf("\n%d is deleted from the list",ptr->info);
free(ptr);}
}
//deletion at the end of the list
void delend()
{
struct node *temp,*ptr;
if(st==NULL)
{printf("\nList is empty!");
exit(0);
}
else if(st->next==NULL)
{ptr=st;
st=NULL;
printf("%d is deleted from the list\n",ptr->info);
free(ptr);}
else
{ptr=st;
while(ptr->next!=NULL)
{temp=ptr;
ptr=ptr->next;}
temp->next=NULL;
printf("\n%d is deleted from the list",ptr->info);
free(ptr);}
}
//deletion at the specified position of the list
void delpos()
{
int i,pos;
struct node *temp,*ptr;
if(st==NULL)
{printf("\nList is empty!");
exit(0);}
else
{printf("\nEnter the position to be deleted:");
scanf("%d",&pos);
if(pos==0)
{ptr=st;
st=st->next;
printf("\n%d is deleted from the list",ptr->info);
free(ptr);}
else
{ptr=st;
for(i=0;i<pos;i++)
{temp=ptr;
ptr=ptr->next;
if(ptr==NULL)
{printf("\nPosition not found!");
return;}
}
temp->next=ptr->next;
printf("\n%d is deleted from the list");
free(ptr);}}
}
//deleting entire list
void dellist(struct node **st)
{
struct node *c=*st;
struct node *next;
while(c!=NULL)
{next=c->next;
free(c);
c=next;}
*st=NULL;
printf("\nEntire linked list deleted!");
}
//to get the no.of nodes in the list
int getcount(struct node *st)
{
int count=0;
struct node *c=st;
while(c!=NULL)
{count++;
c=c->next;}
return count;
}
//to search the given element(here 21)in the list
void search(struct node *st,int x)
{
struct node *c=st;
while(c!=NULL)
{if(c->info==x)
   {printf("\nElement found in the list!");
    return;}
 c=c->next;
}
printf("\nElement not found!");

}
//to get the element in the nth node
int getnth(struct node *st,int i)
{
struct node *c=st;
int count=0;
while(c!=NULL)
{if(count==i)
   return(c->info);
 count++;
 c=c->next;}
assert(0);
}
