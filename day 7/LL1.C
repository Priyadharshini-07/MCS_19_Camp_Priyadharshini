#include<stdio.h>
#include<stdlib.h>
struct node
{int info;
struct node* next;
};
void display(struct node* n)
{
while(n!=NULL)
{
printf("%d",n->info);
n=n->next;
}
}
int main()
{
struct node* l1=NULL;
struct node* l2=NULL;
struct node* l3=NULL;
l1=(struct node*)malloc(sizeof(struct node));
l2=(struct node*)malloc(sizeof(struct node));
l3=(struct node*)malloc(sizeof(struct node));
l1->info=10;
l1->next=l2;
l2->info=20;
l2->next=l3;
l3->info=30;
l3->next=NULL;
display(l1);

return 0;
}