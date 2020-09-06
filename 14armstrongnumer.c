#include<stdio.h>
#include<math.h>
int main()
{
int n,i,sum=0,temp;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(n>0)
{i=n%10;
sum=sum+(i*i*i);
n=n/10;
}
if(sum==temp)
printf("armstrong number");
else
printf("not armstrong");
}