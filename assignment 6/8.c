// 8. Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main(){
    int i,n;
    printf("enter a number ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
     if(n%i==0)
      break;
    }
     if(i==n)
      {
        printf("the number %d is prime",n);
      }
    else
    {
     printf("the number %d is not prime",n);    
    }
}
