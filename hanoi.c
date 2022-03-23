#include<stdio.h>
#include<stdlib.h>
void tower(int n,char source,char tmp,char destination)
{
 if(n==0)
 return;
 tower(n-1,source,destination,tmp);
 printf("move disk %d from %c to %c\n",n,source,destination);
 tower(n-1,tmp,source,destination);
}

int main()
{
 int n;
 printf("enter the number of disc\n");
 scanf("%d",&n);
 tower(n,'A','B','C');
 return 0;
}
