// reverse of an array
#include <stdio.h>
int main(){
    int n;
    printf("enter the size of an array: \n");
    scanf("%d",&n);

    int arry[n];
     printf("enter the array element:\n");
    for(int i=0 ; i<n; i++){
       printf("arr[%d]:",i);
       scanf("%d[i]\n", &arry[i]);
    }
    for(int i=n-1; i>0; i--){
        printf("arr[%d]:",i);
        printf("%d\n", arry[i]);
    }
    return 0;
}