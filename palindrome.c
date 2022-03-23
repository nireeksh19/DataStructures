#include<stdio.h>
#include<stdlib.h>

char s[100];
int top=-1;
void push(char ch)
{
  s[++top]=ch;
}
 
char pop()
{
  return s[top--];
}

void main()
{
 char str1[100],c;
 int i;
 printf("enter the string:\n");
 scanf("%s",str1);
 for(i=0;str1[i];i++)
     push(str1[i]);
 i=0;
 while(top!=-1)
  {
    c=pop();
    if(c!=str1[i])
    {
      printf("not palindrome\n");
      exit(0);
    }
     i++;
  }
  if(top==-1)
     printf("palindrome\n");
}
