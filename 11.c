//sum of digit
#include<stdio.h>
int main()
{
int n,temp=0,s=0;
printf("enter the value of n\n");
scanf("%d",&n);
while(n>0)
{
temp=temp+n%10;
printf("%d \n",temp);
n=n/10;
}
printf("%d ",temp);

}