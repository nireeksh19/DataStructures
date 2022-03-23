#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *link;
};
typedef struct node * NODE;
NODE getnode()
{
NODE temp;
temp=(NODE)malloc(sizeof(struct node));
if(temp==NULL)
{
 printf("memory allocation failed:(\n");
 return NULL;
}
return temp;
}
NODE insertfront(NODE first,int data)
{
NODE tmp;
tmp=getnode();
tmp->info=data;
tmp->link=first;
return tmp;
}
void display(NODE first)
{
NODE cur;
if(first==NULL)
{
printf("empty list");
return;
}
printf("linked list:\n");
cur=first;
while(cur!=NULL)
{
printf("%d\t",cur->info);
cur=cur->link;
}
}
NODE reverse(NODE first)
{
NODE prev,cur,next;
if(first==NULL || first->link==NULL)
 return first;
prev=NULL;
cur=first;
while(cur!=NULL)
{
 next=cur->link;
 cur->link=prev;
 prev=cur;
 cur=next;

}
return prev;
}
void deletebykey(NODE first,int key)
{
NODE temp=first,prev;
if(temp!=NULL && temp->info==key)
 {
 first=temp->link;
 return;
 }
 while(temp!=NULL && temp->info!=key)
 {
 prev = temp;
 temp = temp->link;
 }
 if (temp==NULL)
 return;
 prev->link = temp->link;
free(temp);
}
NODE insertpos(NODE first, int data, int pos)
{
 NODE tmp=getnode();
 tmp->info = data;
 if (first==NULL)
 {
 return tmp;
 }
 if (pos== 1)
 {
 tmp->link =first;
 return tmp;
 }
 NODE cur =first;
 while (pos-1>0)
 {
 cur = cur->link;
 pos--;
 }
 tmp->link =cur->link;
 cur->link =tmp;
 return first;
}
void main()
{
NODE first=NULL;
int ch,item,key,pos;
for(;;)
{
 printf("\n1.insert front 2.Delete key 3.Reverse 4.Insert at given position 5.Display\n");
 printf("Enter your choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:printf("Enter item to insert:");
 scanf("%d",&item);
 first=insertfront(first,item);
 break;
 case 2:printf("Enter key:");
 scanf("%d",&key);
 deletebykey(first,key);
 break;
 case 3:first=reverse(first);
 break;
 case 4:printf("Enter position:");
 scanf("%d",&pos);
 printf("Enter item:");
 scanf("%d",&item);
 first=insertpos(first,item,pos);
 case 5:display(first);
 break;
 }
}
}
