#include <stdio.h>

void checkEvenOdd(int n)
{
    if(n % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkEvenOdd(n);

    return 0;
}