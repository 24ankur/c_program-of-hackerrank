#include<stdio.h>
int changed(int *a,int *b)
{
 int temp;
 temp=*a;
 printf("value of temp %d ",temp);
 *a=*b;
 *b=temp;       
}
int main()
{
int a=36,b=54;
printf(" %d %d \n",a,b); 
changed(&a,&b);
printf("value final %d %d ",a,b);    
}