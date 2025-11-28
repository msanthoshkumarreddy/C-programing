#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("%d is large",a);
    else if(b>a&&b>c)
    printf("%d is large",b);
    else
    printf("%d is large",c);
    }