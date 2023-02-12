/*Write a recursive function to calculate sum of squares of first n natural numbers*/

#include<stdio.h>
#include<math.h>

int sumsqr(int n)
{
    if(n==1)
        return 1;
    return sumsqr(n-1)+pow(n,2);
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n",sumsqr(num));
    return 0;
}