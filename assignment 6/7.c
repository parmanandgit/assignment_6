// 7. Write a program to count digits in a given number
#include<stdio.h>
int main(){
    int n,N,i;
    printf("enter a number ");
    scanf("%d",&N);
    n=N;
    for(i=0;n;i++)
      n=n/10;
      printf("%d has %d digits",N,i);
      return 0;
}