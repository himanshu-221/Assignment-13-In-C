/*Write a recursive function to calculate sum of digits of a given number*/

#include<stdio.h>

int digitsum(int n)
{
    if(n==0)
        return 0;
    //s+=n%10;
    return digitsum(n/10)+n%10;
    
}

int main()
{
    int num;
    printf("Enter a number more than one digit\n");
    scanf("%d",&num);
    printf("%d",digitsum(num));
    return 0;
}