#include<stdio.h>
 int main ()
 {
    int n , table ;
    printf("enter the table\n");
    scanf("%d", &n);

    for( int i=1; i<=20; i++){
        table=n*i;
        printf("%d\n",table);
    }

 }