// 10. Write a program to reverse a given number
#include<stdio.h>
int main()
{
  int N, n,rev_n=0;
  printf("enter a number ");
  scanf("%d",&N);
  n=N;
  while(n)
  {
   rev_n=rev_n*10+(n%10);
    n=n/10;
  }
  printf(" reverse of %d  is %d",N,rev_n);
    return 0;
}