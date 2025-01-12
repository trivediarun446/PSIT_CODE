// write a c programe to count odd and even number in an array
#include <stdio.h>
int main(){
    int n, i, odd=0,even=0;
    int arr[30];
    printf("enter the number of element in the array :");
    scanf("%d",&n);
    printf("enter the element of an array\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for (int k = 0; k < n; k++)
    {
        if(arr[k]%2==0)
          even++ ;
        else 
          odd++ ;
    }
    printf("number of odd number is %d and no.of even num is %d",odd,even);
    
    return 0;

}