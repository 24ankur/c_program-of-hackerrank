#include<stdio.h>
int main()
{
    char operator;
    double value;
    double value1;
    printf("enter the operator ");
    scanf("%c",&operator);
    printf("enter the value of VALUE & VALUE1");
    scanf("%lf %lf",&value,&value1);
   
    
    switch (operator) 
        {
        case '+':
        printf(" %lf + %lf = %lf \n",value,value1,value+value1);
        break;
        case '-':
        printf("%lf \n",value-value1);
        break;
        case '*':
        printf("%lf \n",value*value1);
        break;
        default:
        printf("kuch to glt hai bhai");

    }

}