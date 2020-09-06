#include<stdio.h>
int main()
{
 int s[10]={1,2,3,4,5,6,7,9,15,52};
 int size=sizeof(s)/sizeof(int);
 int c=0,low=0,high=size-1,element=7;

 while (low<=high)

 {
   c=c+1;
  int mid=(low+high)/2;
  printf("%d\n",mid);
 if (s[mid]==element)
 {
   printf("%d is the index of finding element ",mid);
   break;
 }
 else if (s[mid]>element)
 {
   high=mid-1; 
 }
 else
 {
     low=mid+1;
 }
 }

 printf("%d",c);
}