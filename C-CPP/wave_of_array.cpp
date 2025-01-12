// write a c++ programe to print wave of an array using function , dynamic memory allocation and pointer 
#include<iostream>
#include<stdlib.h>
using namespace std;
void swap(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}
void sort(int *arr , int size ){
    for (int i = 0; i < size ; i++){
        for (int j = 0; j < size-i-1; j++)
        {
            if (*(arr+j) > *(arr + j+1))
            {
             swap(arr+j,arr+j+1);
            }
            
        }
        
    }
}
void wavearray(int *arr, int size){
    for (int i = 0; i<size-1; i+=2)
    {
        swap(arr+i,arr+i+1);   
    }
     
    
}
int main ()
{
    int n ; 
    cout<< "enter the array element"<<endl;
    cin>>n;
    int *arr ;
    arr= (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    wavearray(arr ,n);
   for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
 return 0;   
}
