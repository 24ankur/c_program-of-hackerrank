#include<stdio.h>
int main()
{
    int a=0,b=1,temp=1,n,i=0;
    printf("enter the value of n");
    scanf("%d",&n);
    while(i<=n){
        printf("%d ", temp);
        temp=a+b;
        
        a=b;
        b=temp;
        i=i+1;
        

    }

}