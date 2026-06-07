#include<stdio.h>

 int reverse=0;

 void reversenumber(int n)
 {
    if(n==0)
    return;

    reverse=reverse*10+n%10;
    reversenumber(n/10);
 }

 int main()
 {
    int n;

    printf("enter a number");
    scanf("%d",&n);

    reversenumber(n);

    printf("reverse number=%d",reverse);

    return 0;
 }