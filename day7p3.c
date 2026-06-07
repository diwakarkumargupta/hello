#include<stdio.h>
  
int sumdigit(int n)
{
    if(n==0)
    return 0;

    return(n%10)+sumdigit(n/10);
}
 int main()
 {
    int n;

    printf("enter a number");
    scanf("%d",&n);

    printf("sum of digit=%d",sumdigit(n));
    return 0;
 }