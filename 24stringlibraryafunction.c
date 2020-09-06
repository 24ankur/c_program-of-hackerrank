#include<stdio.h>
#include<string.h>
int main()
{
 char s[]={"harry"};
 char r[]={"good"};
 char t[20];
 printf("%d \n",strlen(s));
 printf("%s \n",strrev(s));
 strcpy(t,strcat(s,r));
 printf("%s\n",t);
 printf("%s",strcat(s,t));  
}