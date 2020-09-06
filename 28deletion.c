#include<stdio.h>

int traversedd(int s[],int sized)
{
  for(int i=0;i<sized;i++)
  {
   printf("%d ",s[i]);   
  }
  printf("\n") ;
}

int deletion(int s[],int index)
{
 for(int i=index+1;i>=6;i++)
 {
   s[i-1]=s[i];  
 }   
}

int main()
{
  int sized=7,index=3,s[10]={1,2,3,4,5,6,7};
  traversedd(s,sized);  
  deletion(s,index);
  sized-=1;
  traversedd(s,sized);

}