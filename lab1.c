// char global and int local 
#include<stdio.h> 
#include<stdlib.h> 
 
#define SIZE 20 
 
char s[SIZE]; 
int top=-1; //global variables stack and top 
 
void push(char ele); // function prototype for insertion 
void pop(); // function prototype for deletion 
void display(); // function prototype for displaying the contents of stack 
 
void main() 
{ 
 int ch; 
 char item; 
 for(;;) // infinte loop to ask user choices for different operations 
 { 
    printf("\n1.Push 2.Pop 3.Display 4.Exit\n"); 
    printf("Enter your choice:"); 
    scanf("%d",&ch); 
   switch(ch) 
  { 
 case 1:printf("Enter the item to be inserted\n"); 
        scanf(" %c", &item); // read element to be inserted to the stack 
        push(item); // call push function to insert element 
        break; 
 case 2:pop(); // call pop function to delete top most element of the stack 
        break; 
 
 case 3:display(); // call display function to see the contents of stack 
        break; 
 case 4:exit(0); 
  } 
 } 
} 
void push(char ele) 
{ 
 if(top==SIZE-1) //check if stack is full 
 { 
 printf("Stack overflow\n"); 
 return; 
 } 
 s[++top] = ele; // increment top and insert the element (pre increment) 
} 
 
void pop() 
{ 
 if(top==-1) // check if stack is empty 
 { 
 printf("Stack underflow\n"); 
 } 
 else 
 { 
   printf("The Deleted element is %c \n",s[top--]); //delete the element and decrement top (post decrement) 
 } 
} 
 
void display() 
{ 
 if(top==-1) // check if stack is empty 
 { 
 printf("Stack is empty\n"); 
 return; 
 } 
 printf("\nElements in stack are as follows:\n"); 
 for(int i=0;i<=top;i++) // print all elements of the stack from index 0 to top 
 printf("%c ",s[i]);

}