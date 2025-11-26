#include <stdio.h>
void main(){
    int n=3,i,a,sum=0;
    for(i=1;i<=n;i++) 
    {
    printf("Enter number");
    scanf("%d",&a);
    sum=sum+a;  
    }
    printf("Sum of numbers is %d",sum);
}