// Write a cpp programe to check a array is sorted or not by using the recursion 

// LOGIC BEHIND IT 
//  -> Frist of all we make a base for it 
//                Our base case is that if cheack elemnt in frist or zero position it means it is sorted 
//                so we take this sorted 
//  -> Now we cheack the first and secound element of an array if it is sorted then we pass recursive call 

#include<iostream>
using namespace std ;
bool chksorted(int * arr , int size )
{
    // base 
    if (size ==0 || size ==1 )
    return true ;
    if(arr[1]>arr[2])
    {
        return false ;
    }
    else {
        // Here this logic for comparison between other array element 
    bool ans = chksorted( arr+1 , size-1);
    return ans ;
    }
}
int main ()
{
    int n ; 
    cout<<"enter the size of an array "<<endl ;
    cin >> n ;
    int * arr ;
    arr = (int *)malloc(n*sizeof(int));
    cout<<"enter the array element "<<endl ;
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    bool ans = chksorted(arr, n );
    if(ans==1)
    {
        cout<<"Array is sorted "<<endl ;

    }
    else {
        cout<<"Array is not sorted "<<endl;
    }
}