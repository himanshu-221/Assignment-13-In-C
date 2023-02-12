/*Write a program in C to calculate the power of any number using recursion*/
#include<stdio.h>

int power(int n1,int n2)
{
    if(n2==0)
        return 1;
    return n1*power(n1,n2-1);
}

int main()
{
    int num1,num2;
    printf("Enter a number and its power\n");
    scanf("%d %d",&num1,&num2);
    printf("%d to the power of %d is= %d",num1,num2,power(num1,num2));
    return 0;
}