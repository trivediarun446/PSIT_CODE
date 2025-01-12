// write a cpp programe to find a number by using binary search and use recursion method 
#include<iostream>
using namespace std ; 
bool binarysearch(int arr[], int start ,int end , int key)
{
    // base case 
    if (start>end)
    {
        return 0 ; 
    }
    int mid = start+ (end-start)/2 ;
    if (arr[mid]==key)
    {
            return 1 ;
    }
    else if (arr[mid]<key)
    {
        return binarysearch(arr , mid+1, end , key);
    }
    else if (arr[mid]>key)
    {
        return binarysearch(arr , start , mid -1 , key);
    }
    
}
int main ()
{
    int end ; 
    cin>> end ; 
    int start=0 ;
    int arr[end];
    for (int i = 0; i < end; i++)
    {
        cin>>arr[i];
    }
    int key ;
    cout<<"enter the number which you want to search"<<endl ;
    cin>>key ;
    cout<<binarysearch(arr,start, end , key);

}