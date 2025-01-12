// wite a c program to check which number is greater
#include <stdio.h>
int main(){
    int a,b,c ;
    printf("entr three number: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
       printf("a is grater");
     else if( b>a && b>c)
      printf("b is greater");
     else
         printf("c is grater");

}
