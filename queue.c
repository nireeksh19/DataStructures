#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int f=0,r=-1,q[SIZE];
void insrt(int ele);
int delet();
void display();
int num_of_ele();
void main()
{
  int ch,item,del;
  for(;;)
   {
     printf("\n1.insert 2.delete 3.display 4.number of elements in queue 5.exit\n");
     printf("enter your choice: ");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1:printf("enter the item to be inserted\n");
               scanf("%d",&item);
               insrt(item);
               break;
        case 2:del=delet();
               if(del!=-1)
                    printf("deleted elements is %d\n",del);
               break;
        case 3:display();
               break;
        case 4:printf("number of elements in the queue is %d\n",num_of_ele());
               break;
        case 5:exit(0);
     }
  }
}

int num_of_ele()
{
  return (r-f+1);
}
 
void insrt(int ele)
{
  if(f==SIZE-1)
    {
       printf("queue is full\n");
       return;
     }
  q[++r]=ele;
}

int delet()
{ 
  if(f>r)
   { 
      printf("queue is empty\n");
      return -1;
   }
  return q[f++];
}

void display()
{
  int i;
  if(f>r)
   {
      printf("queue is empty.no elements to display\n");
      return;
   }
   printf("elements present in the queue are\n");
   for(i=f;i<=r;i++)
       printf("%d\n",q[i]);
}
