#include<stdio.h>
int main(){
    int n,largest=0;

    printf("enter a number");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        while(n%i==0){
            largest=i;
            n/=i;
        }
    }
    printf("largest prime factor =%d",largest);
    return 0;
}