// 5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main(){
  int N,sum=0;
  printf("enter the value of N ");
  scanf("%d",&N);
  for (int i = 1; i <=N ; i++)
   sum=sum+i*i*i;
   printf("The sum of cubes of first %d natural number is %d ",N,sum);
   return 0;
}