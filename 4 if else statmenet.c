#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of age");
    scanf("%d",&n);
    if (n<=10 && n<0){ 
        printf("babies");
    }
    else if(n<19){
        printf("youth");
    }
    else{

        printf("legend");
    }
    
}
