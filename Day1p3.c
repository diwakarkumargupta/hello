#include<stdio.h>
int main(){
int n,fact=1;
printf("enter the no:");
scanf("%d",&n);
if(n==0){
    printf("factorial is 1");
}
else{
    for(int i=1;i<=n;i=i+1){
        fact=fact*i;
    }
    printf("%d",fact);
}
return 0;
}