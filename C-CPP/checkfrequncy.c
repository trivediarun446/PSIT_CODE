// write a c programe to a frequncy of a given number 
#include <stdio.h>
int main()
{
    
    int n, freq= 0,k;
    int arry[15];
    printf("enter the number of element\n");
    scanf("%d",&n);

    printf("enter the Array elements:\n");
    for (int i = 0; i<n; i++)
    {
        printf("arry[%d]:",i);
        scanf("%d", &arry[i]);
    }
    printf("enter the number to check there frequncy");
    scanf("%d",&k);
    for (int i = 0; i < n; i++){
        if(arry[i]==k){
        freq++ ;
        printf("frequncy of given number %d is %d",k,freq);
        }
    }
    
return 0;
}    
