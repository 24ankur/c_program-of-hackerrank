#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10][10],i,j,row,coulmn,m[10][10],mul[10][10],k;
printf("enter the value of row\n");
scanf("%d",&row);
printf("enter the value of coulmn\n");
scanf("%d",&coulmn);
for(i=0;i<row;i++)
{
for(j=0;j<coulmn;j++)
{
printf("enter the element of first matrix\n");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<row;i++)
{
for(j=0;j<coulmn;j++)
{
printf("enter the element of second matrix\n");
scanf("%d",&m[i][j]); 
}    
}
for(i=0;i<row;i++)
{
for(j=0;j<coulmn;j++)
{
mul[i][j]=0;    
for(k=0;k<coulmn;k++)
{
mul[i][j]+=a[i][k]*m[k][j];    
}
}
}
for(i=0;i<coulmn;i++)
{
for(j=0;j<coulmn;j++)
{
printf(" %d  ",mul[i][j]);

}
printf("\n");    
}
}