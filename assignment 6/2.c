// 2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main(){
  int N,sum=0;
  printf("enter the value of n ");
  scanf("%d",&N);
  for (int i = 1; i <=N; i++)
  {
     sum=sum+2*i;
  }
  printf("the sum of first %d even natural number is %d ",N,sum);
return 0;


}