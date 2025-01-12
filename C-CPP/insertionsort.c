// write  c programe me to sort an array by using insertion sorting 
// In this sorting put each element in their propertion position in one go 
#include<stdio.h>
int main(){
    int n,j,key ;
    printf("enter the number of element in an array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the element in an array");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i < n; i++)/*we initialize i from a becasue we assume that the arr[0] is an sorted element */
    {
        key=arr[i];
        j=i-1;
        while(key<arr[j]> && j>=0){
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=key;
    }
    printf("sorted rray is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    
    
}