#include<stdio.h>
void main(){
    int a,b,c;
	float sum,avg;
	printf("enter a b c values");
	scanf("%d%d%d ",&a,&b,&c);
	sum=a+b+c;
	avg=sum/3;
	printf("sum %f \n avarage %f",sum,avg);
}