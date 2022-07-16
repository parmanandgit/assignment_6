// 9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main(){
  int a,b,c;
  printf("enter two number ");
  scanf("%d%d",&a,&b);
  c=a>b?a:b;
  while (1)
  {
    if((c%a==0) && (c%b==0))
    break;
    c++;
  }
  printf("lcm of %d and %d is %d",a,b,c);
  return 0;
}