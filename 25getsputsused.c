#include<stdio.h>
#include<string.h>

int main()
{
char s[20],d[20],temp[20];
gets(s);
puts(s);
strcpy(temp,s);
gets(d);
puts(d);
printf("%s\n",strcat(s,d));
puts(temp);


}