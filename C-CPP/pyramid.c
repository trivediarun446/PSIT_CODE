#include<stdio.h>
int main(){
    int n ;

    printf("enter the number of rows \n");
    scanf("%d",&n);
    printf("testing ");
    for (int i = 1; i<=n; i++)
    {
        for (int k = 1; k<=n-i; k++){
        printf(" ");
        }
        for(int k=1; k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}