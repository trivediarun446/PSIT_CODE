// write a c programe to sort an array by using bubble sort 
#include <stdio.h>
int main(){
    int n , t;
    int arr[30];
    printf("enter the nuber of element in an array:");
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {            
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
   return 0; 
    
}