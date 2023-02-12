/*Write a program in C to count the digits of a given number using recursion*/
#include<stdio.h>

int digit(int n)
{
    int static count=0;
    if(n==0)
        return 1;
    count++;
    digit(n/10);
    return count;
}

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("%d",digit(num));
    return 0;
}