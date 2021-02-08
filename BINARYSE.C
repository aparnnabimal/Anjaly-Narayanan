#include<stdio.h>
#include<stdlib.h>
struct btnode
{
int value;
struct btnode*l;
struct btnode*r;
}
*root=NULL, *temp=NULL,*t2,*tl;
void insert();
int flag=1;
void main()
{
int ch;
printf("\nOPERATIONS---");
printf("\n1- Insert an element into tree\n");
while(l)
{
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
   insert();
   break;
   default:
   printf("Wrong choice,Please enter correct choice");
   break;
   }
   }
   }
   void insert()
   {
   create();
   if(root==NULL)
   root=temp;
   else
   search(root);
   }
   void create()
   {
   int data;
   printf("Enter data of node to be inserted:");
   sacnf("%d,&data");
   temp=(struct btnode*)malloc(1*sizeof(struct btnode));
   temp->value=data;
   temp->1=temp->r=Null;
   }
   void search(struct btnode*t)
   {
   if((temp->value>t->value)&&(t->!NULL))
   search(t->r);
   else if(temp->value>t->value)&&(t->r==NULL))
   t->=temp;
   else if((temp->value<t->value)&&(t->1!=NULL))
   search(t->1);
   else((temp->value<t->value)&&(t-1==NULL))
   t->1=temp;
   }






































