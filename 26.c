#include<stdio.h>
int main(void)
{
 void *a="Thinking";
 printf("%d\n",*(char*)++a);   
}