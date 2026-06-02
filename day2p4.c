#include<stdio.h>
int main(){
    int n,original,reverse=0,digit;
    printf("enter a number");
    scanf("%d",&n);
    original=n;
    while(n!=0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if(original==reverse)
       printf("panlindrome number");
     else
       printf("nor a palindrome number");
       return 0;      
}