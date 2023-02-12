/*Write a recursive function to calculate HCF of two numbers*/

#include<stdio.h>

int hcf(int n1,int n2)
{
    if(n2==0)
    {
        return n1;
    }
    else{
        return hcf(n2,n1%n2);
    }
}

int main()
{
    int num1,num2;
    printf("Enter two numbers to calculate hcf\n");
    scanf("%d %d",&num1,&num2);
    int min=num1<num2?num1:num2;
    int max=num1>num2?num1:num2;
    printf("%d",hcf(min,max));
    return 0;
}