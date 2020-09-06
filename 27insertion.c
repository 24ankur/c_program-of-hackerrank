#include<stdio.h>
int main()
{
 int a[10]={1,2,3,4,5};
 for(int i=4;i>=3;i--)
 {
   a[i+1]=a[i];
 }
  a[3]=45;
for(int i=0;i<=5;i++)
{     
    printf("%d ",a[i]);
 }

 }