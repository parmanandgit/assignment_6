// 6. Write a program to calculate factorial of a number
#include<stdio.h>
int main(){
   int n,factorial=1;
   printf("enter a number ");
   scanf("%d",&n);
   for(int i=n;i;i--)
   {
     factorial=factorial*i;
   }
   printf("the factorial of %d is %d",n,factorial);
   return 0;
}



    