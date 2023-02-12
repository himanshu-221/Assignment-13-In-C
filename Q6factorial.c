/*Write a recursive function to calculate factorial of a given number*/

#include<stdio.h>

int fact(int n)
{
    if(n==1)
        return 1;
    
    return fact(n-1)*n;
}
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Factorial is=%d",fact(num));
    return 0;
}