#include<stdio.h>
int main()
{
    int n,i,c=1;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=c*i;
    }
    printf("%d",c);
}