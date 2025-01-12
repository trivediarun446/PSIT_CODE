// write c++ programe to count number of possible triangle in an array 
#include<iostream>
#include<cstdio>
using namespace std;
int possibletriangle(int *ptr, int n){
    int count=0 ;
   
    for (int i = 0; i < n-2 ;i++)
    {
        for (int j = i+1; j < n-1 ; j++)
        {
            for (int k = j+1; k < n ; k++)
            {
                if (ptr[i] + ptr[j] > ptr[k] && ptr[i] + ptr[k] > ptr[j] && ptr[k] + ptr[j] > ptr[i])
                {
                    count++ ;
                }
                
            }
            
        }
        
    }

  return count ;  
}
int main(){
    int n ;
    printf("enter the number of element in an array \n");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));
    cout<<"enter the element"<<endl;
    for (int i = 0; i < n; i++)
    {
       cin>> ptr[i];  
         
    }
    
    cout << "count of Triangles possible : "<< possibletriangle(ptr, n);
    free(ptr);
   return 0;
}