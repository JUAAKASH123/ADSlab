#include<stdio.h>
#include<stdlib.h>
void insbeg();
void insmid();
void insend();
void delbeg();
void delmid();
void delend();
void display();
void creation();
void searching();
struct node
{
 int data;
 struct node*next,*prev;
};
struct node*head,*newnode,*temp,*temp1;
void main()
{
 int choice=0;
 clrscr();
 do
 {
  printf("Enter the choice\n1.creation\n2.Insertion at begining\n3.Insertion at middle\n4.Insertion at end\n5.Deletion of begining\n6.Deletion at middle\n7.Deletion at end\n8.Search\n9.Exit\n press a number in range:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:creation();display();break;
   case 2:insbeg();display();break;
   case 3:insmid();display();break;
   case 4:insend();display();break;
   case 5:delbeg();display();break;
   case 6:delmid();display();break;
   case 7:delend();display();break;
   case 8:searching();display();break;
   case 9:exit(0);break;
  }
 }
 while(choice!=9);
 getch();
}
void creation()
{
 int ch=1;
 head=0;
 while(ch)
 {
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("enter the elements to be inserted it:");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  newnode->prev=NULL;
  if(head==0)
  {
   head=temp=newnode;
  }
  else
  {
   temp->next=newnode;
   newnode->prev=temp;
   temp=newnode;
  }
  printf("Do you want to continue (1/0)");
  scanf("%d",&ch);
 }
}
void display()
{
 int count=0;
 temp=head;
 printf("\n the linked list is:\n");
 printf("START->");
 while(temp!=NULL)
 {
  count=count+1;
  printf("%d->",temp->data);
  temp=temp->next;
 }
 printf("END");
 printf("\n The number of nodes is:\t%d\n\n",count);
}
void insbeg()
{
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("enter the element to be i8nserted \t");
 scanf("%d",&newnode->data);
 newnode->next=head;
 newnode->prev=NULL;
 head=newnode;
}
void insmid()
{
 int pos,count=0,i=1;
 temp=head;
 while(temp!=NULL)
 {
  count=count+1;
  temp=temp->next;
 }
 printf("Enter the position after which the element to be inserted\t");
 scanf("%d",&pos);
 if(pos>count)
 {
  printf("invalid position");
 }
 else
 {
  temp=temp1=head;
  while(i<pos)
  {
   temp1=temp;
   temp=temp->next;
   i++;
  }
  printf("enter the element to be inserted \t:");
  newnode=(struct node*)malloc(sizeof (struct node));
  scanf("%d",&newnode->data);
  newnode->next=temp;
  temp->prev=newnode;
  newnode->prev=temp1;
  temp1->next=newnode;
 }
}
void insend()
{
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("Enter the element to be inserted\t;");
 scanf("%d",&newnode->data);
 newnode->next=NULL;
 temp=head;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 temp->next=newnode;
 newnode->prev=temp;
}
void delbeg()
{
 if(head==NULL)
 printf("Node absent\n");
 temp=head;
 head=temp->next;
 head->prev=NULL;
 free(temp);
}
void delmid()
{
 int del;
 if(head==NULL)
 printf("Node absent\n");
 printf("Enter the data to delete it:");
 scanf("%d",&del);
 temp=head;
 while(temp->data!=del)
 {
  if(temp->next==NULL)
  {
   printf("Give node is not found \n");
   break;
  }
  else
  {
   temp=temp->next;
  }
 }
 while(temp->data==del)
 {
  if(temp==head)
  {
   head=NULL;
   free(temp);
  }
  else
  {
   temp->prev->next=temp->next;
   free(temp);
  }
 }
}
void delend()
{
 if (head==NULL)
 printf("Node absent\n");
 temp=head;
 while(temp->next!=NULL)
 {
  temp1=temp;
  temp=temp->next;
 }
 temp1->next=NULL;
}
void searching()
{
 int item,i=1,flag=0;
 printf("Enter the elementto search:");
 scanf("%d",&item);
 temp=head;
 while(temp!=NULL)
 {
  if(temp->data==item)
  {
   printf("\n\n ITEM FOUND AT %d POSITION\n\n",i);
   flag=flag+1;
  }
  i=i+1;
  temp=temp->next;
 }
 if(flag==0)
 {
  printf("\nSORRY.....ITEM NOT FOUND!!\n\n");
 }
}
