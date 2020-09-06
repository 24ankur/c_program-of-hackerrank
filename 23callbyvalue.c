#include<stdio.h>
 int func(char a,int b,int c)
{
switch(a)
{
 case '+':
printf(" %d ",b+c);
break;
}

}


int main()
{
 int n,i,b,c; 
 char a;
 printf("enter the char value\n");
 scanf("%c",&a);
 printf("enter the n value\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("enter the a&b value\n");
 scanf("%d %d",&b,&c);
 printf(" %d ",func(a,b,c));
 }
}