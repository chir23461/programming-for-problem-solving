// add two numbers given by user in c programming

#include <stdio.h>

int main()
{
    int a, b;
    printf("enter a number a : ");
    scanf("%d", &a);

    printf("enter a number b : ");
    scanf("%d", &b);

    int sum;
    sum = a + b;
    printf("sum is %d", sum);

    return 0;
}