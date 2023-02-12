/*Write a recursive function to calculate sum of first N natural numbers*/

#include<stdio.h>

int sum(int n)
{
    if(n==1)
        return 1;
    n=sum(n-1)+n;
    return n;
}

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Sum of first n natural no. is= %d",sum(num));
    return 0;
}