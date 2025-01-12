
// print table by using do while loop 
#include<stdio.h>
int main(){
    int n , table ;

    printf("enter the number");
    scanf("%d", &n);

    int i=1;
    do{
        table=i*n;
        printf("%d\n",table);
        i++ ;

    }
    while(i<=10);
    return 0 ;
}