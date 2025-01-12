// write a c program to delete a user defined index
#include <stdio.h>
int main(){
    int n, elem;
    int arr[10];
    printf("enterr the numberr of element of the array \n");
    scanf("%d",&n);
    printf("ente the array element\n");
    for(int i=0;i< n ; i++){
        printf("arr[%d:]", i);
        scanf("%d",&arr[i]);
    }
    printf("enter the location of elemnet which you want to delete\n");
    scanf("%d", &elem);

// element index ke basis me nhi delete ho rhe hai serial number ke basis me delete ho rhe hai 
if(elem >=n+1)
     printf("Given index does't possible");
else {
      for (int i = elem-1; i < n-1; i++)
      {
        arr[i]=arr[i+1];
      }
      
}
for(int i=0;i<n-1;i++){
    printf("arr[%d]:",i);
    printf("%d\n",arr[i]);
}
}