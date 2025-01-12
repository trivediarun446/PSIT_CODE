// write a c program to chect number is armstrong or not 
// armstrong are those number which have the sum of the cube there particular digit is equal to the orginal digit 
#include <stdio.h>
 int main(){
    int n , x,sum=0;

    printf("enter the number to check");
    scanf("%d",&n);
    x=n;
    while (n>0)
    {
        sum=sum+ (n%10)*(n%10)*(n%10) ;
        n=n/10;
    }
    if(sum==x){
      printf("armstrong");
    }
    else 
      printf("not armstrong");
   return 0;

 }
