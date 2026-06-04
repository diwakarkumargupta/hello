#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,rem,digit=0;
    int sum=0;
    printf("enter a number");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        digit++;
        temp/=10;
    }
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum+=pow(rem,digit);
        temp/=10;
    }
    if(sum==num)
     printf("armstrong number");
    else
     printf("not an armstrong number"); 
     return 0; 
}