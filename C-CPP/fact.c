#include<stdio.h>
int main(){
    int fact=1, n ;

    printf("enter the number :");
    scanf("%d",&n);

    for(int i=n ; i>=1;i--){
        fact=fact*i;
    }
    printf("Value is this %d",fact);
    return 0;
}
