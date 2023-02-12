/*Write a recursive function to calculate sum of first N odd natural numbers*/

#include<stdio.h>

int sumodd(int n)
{
    if(n==1)
        return 1;
    return (2*n-1)+sumodd(n-1);

}

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("%d",sumodd(num));
    return 0;
}