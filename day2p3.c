#include<stdio.h>
int main(){
    int n,product=1,digit;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0){ 
        digit=n%10;
        product*=digit;
        n=n/10;
    }
    printf("product of digit=%d",product);
    return 0;
}