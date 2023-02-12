/*Write a recursive function to print first N terms of Fibonacci series*/

#include<stdio.h>

int fib(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
    
}

int main()
{
    int i, num;
    printf("Enter how many number you want in fibonacchi series\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d\t",fib(i));
    }
    
    return 0;
}