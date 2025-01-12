// write a cpp programe to print the sum of all element of an array 
#include<iostream>
using namespace std ;
int sumofarray(int arr[] , int index , int n )
{
    if (index ==n )
    {
        return 0;
    }
    return arr[index]+ sumofarray(arr, index+1 ,n) ;
}
int main ()
{
    int n ; 
    cout<<"enter the number of element in an array "<<endl ;
    cin>>n ; 
    int arr[n];
    cout<<"enter the element in an array "<<endl ; 
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i] ;
    }
    cout<<sumofarray(arr, 0 , n );
    
}