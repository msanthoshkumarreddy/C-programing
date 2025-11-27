#include <stdio.h>
void main(){
    int n,sum=0,digit;
    printf("enter number");
    scanf("%d",&n);
    while(n!=0){
    digit=n%10;
    sum=sum+digit;
    n=n/10;
    }
    printf("sum of digits=%d",sum);
    }