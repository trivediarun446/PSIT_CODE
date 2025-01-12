// write a c programe to search a element by binary searching 
#include <stdio.h>
int main(){
  int n,flag=0;
printf("enter the number of element in an array");
  scanf("%d",&n);
int arr[n];
printf("enter the element in the array");
for(int i:i<n;i++){
printf("arr[%d]",i);
scanf("%d",&arr[i]);
int i=0;
int j=n-1;
 while (i <= j)

    {
        mid = (i + j) / 2;
        if (arr[mid] == k)
        {
            flag = 1;
            pos = mid + 1;
            break;
        }
        if (arr[mid] > k)
        {
            j = mid - 1;
        }
        if (arr[mid] < k)
        {
            i = mid + 1;
        }
    }

   if (flag == 1)
   {
    printf("number is found in position %d", pos);
   }
   else{
    printf("number is not found ");
  }
}

