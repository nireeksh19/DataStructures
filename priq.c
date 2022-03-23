#include<stdio.h>
#include<stdlib.h>
#define size 5
int r=-1,q[size];
void enqueue(int ele);
int del_min();
int del_max();
void display();
void main()
{
int ch, item,del;
for(;;)
{
printf("\n 1.Insert 2.Delete minimum 3.Delete maximum 4.display 5.exit\n");
printf("Enter the choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter the element to be inserted ");
 scanf("%d",&item);
 enqueue(item);
 break;
case 2: del=del_min();
 if (del!=-1)
 printf("Deleted element is %d \n",del);
 break;
case 3: del=del_max();
 if (del!=-1)
 printf("Deleted element is %d \n",del);
 break;
case 4: display();
 break;
case 5: exit(0);
}
}
}
void enqueue(int ele)
{
if(r == size-1)
{
 printf("Queue is full\n");
 return;
}
q[++r]=ele;
}
int del_min()
{
int i=0,j;
if(r == -1)
{
printf("queue is empty \n");
return -1 ;
}
int s=q[0];
for(j=0;j<=r;j++)
{
if(q[j]<s)
{
s=q[j];
i=j;
}
}
while(i<=r)
{
q[i]=q[i+1];
i++;
}
r--;
return s;
}
int del_max()
{
int i=0,j;
if(r==-1)
{
printf("queue is empty \n");
return -1 ;
}
int l=q[0];
for(j=0;j<=r;j++)
{
if(q[j]>l)
{
l=q[j];
i=j;
}
}
while(i<=r)
{
q[i]=q[i+1];
i++;
}
r--;
return l;
}
void display()
{
int i;
if(r==-1)
{
printf("queue is empty\n");
return;
}
printf("Elements present in the queue are \n");
for(i=0;i<=r;i++)
 printf("%d ",q[i]);
}
