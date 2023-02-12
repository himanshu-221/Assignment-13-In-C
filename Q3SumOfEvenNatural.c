/*Write a recursive function to calculate sum of first N even natural numbers
*/
#include<stdio.h>

int sumeven(int n)
{
    if(n==1)
        return 2;
    return (2*n)+sumeven(n-1);
}

int main()
{
    int num;
    printf("Enter how many, sum of even number you want\n");
    scanf("%d",&num);
    printf("Sum of %d even natural number is = %d",num,sumeven(num));
    return 0;
}