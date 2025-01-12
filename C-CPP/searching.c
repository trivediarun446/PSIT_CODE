// write a c programe by uniary  search a number in an given array 
#include <stdio.h>
int main(){
    int n,k,pos ,flag=0 ;
    int arr[15];
    printf("enter the number of element in the array:");
    scanf("%d",&n);
    printf("enter the element in the given array:-\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("enter the number which you want to search\n");
    scanf("%d",&k);
    for (int i = 0; i < n; i++)
    {
    if(arr[i]==k){
        pos=i+1;
        flag=1;
        break;
    }
    }
    if(flag==1){
        printf("element is found in %d position ",pos);
    }
    else {
        
        printf("no element found");
    }
}