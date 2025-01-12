// write a c program to check number is prime or not 
#include <stdio.h>
int main(){
    int n,count=0 ;
    printf("enter the number to check ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if (n%i==0){
          count++ ;
        }
    
    }
    if(count==2){
      printf("prime number ");
    }
    else
      printf("not prime ");
return 0 ;

}