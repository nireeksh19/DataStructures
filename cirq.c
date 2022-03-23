#include<stdio.h>
#include<stdlib.h>
#define size 5
int count=0;
void enqueue(int *f, int q[size],int ele);
int dequeue(int *r, int q[size]);
void dis(int *f,int q[size]);
void main()
{
int ch, item,del;
int f=0, r=-1, q[size];
for(;;)
{
printf("\n 1.Insert 2.Delete 3.Display 4.Exit \n");
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch) 
{
case 1: printf("Enter item to be inserted");
 scanf("%d",&item);
 enqueue(&r,q,item);
 break;
case 2: del= dequeue(&f,q);
 if(del!=-1)
 printf("Deleted element is %d\n",del);
 break;
case 3: dis(&f,q);
 break;
case 4: exit(0);
}
}
}

void enqueue( int *r,int q[size], int ele)
{
if(count == size)
{
 printf("Queue is full\n");
 return;
}
*r=(*r+1) % size;
q[*r]=ele;
count++; 
}
int dequeue(int *f,int q[size])
{
int x;
if(count==0)
{
 printf("Queue is empty \n");
 return -1;
}
x=q[*f];
*f=(*f+1)%size;
count--;
return x;
}
void dis( int *f, int q[size])
{
int i, y;
if (count==0)
{
 printf("Queue is empty\n");
 return;
} 
printf("Elements in queue are: ");
y=*f;
for(i=0;i<count;i++)
{
printf("%d ",q[y]);
y=(y+1) % size;
}
printf("\n");
}