#include <stdio.h>
void main() {
  int i,n,key,a[100];
  printf("enter no of ele");
  scanf("%d",&n);
  printf("enter %d ele",n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("enter ele to search");
  scanf("%d",&key);
  for(i=0;i<n;i++){
  if(a[i]==key){
  printf("%d found at given elements",a[i]);
  }
  }
  }