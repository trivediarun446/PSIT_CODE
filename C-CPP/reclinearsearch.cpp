// write a cpp programe for linear search by using recursion method 
#include<iostream>
using namespace std ; 
bool linearsearch(int arr[],int size , int key )
{
    if (arr[size]== -1)
    {
        return 0 ;
    }
    if (arr[size]==key)
    {
        return 1;
    }
    return linearsearch(arr ,size-1,key );
    
}
int main()
{
    int n ;
    cout<<"enter the size of an aray "<<endl ;
    cin>>n ;
    int arr[n];
    cout<<"enter the array element"<<endl ; 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key ;
    cout<<"enter the for search"<<endl ; 
    cin>> key ;
    cout<<linearsearch(arr,n , key);
}