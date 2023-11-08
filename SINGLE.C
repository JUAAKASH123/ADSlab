#include<stdio.h>
#include<stdlib.h>
#include<coinio.h.

struct Node
{
 int data;
 struct Node*link;
};
typedef struct Node Node;
Node*getnode();
void main()
{
 Node*first;
 int choice,item,pos,n;
 clrscr;
 InitilizeLList(&first);
 printf("\n Creating a Linked List \n");
 printf("\n Enter the number of nodes you want to create:");
 scanf("%d",&n);
 LListCreate(&first,n);
 while(i)
 {
  printf("\n\n\t Implementation of a single Linked List\n");
  printf("\n\n\t1.Insertion as a first node");
  printf("\n\n\t2.Insertion of last node");
  printf("\n\n\t3.lnsertion of a node at any specific location");
  printf("\n\n\t4.Deletion of a first Node");
  printf("\n\n\t5.Deletion of a last noe");
  printf("\n\n\t6.Deletion of any node");
  printf("\n\n\t7.Displsy all nodes");
  printf("\n\n\t8.Exit");
  print("\n\n\t Enter (1/2/3/4/5/6/7/8):");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:printf("\n Enter the item:");
	  scanf("%d",&item);