// write a c++ programe to check a frequency of number 
#include<iostream>
using namespace std ;
int main()
{
    int n, mid,count=0 ,pos;
    cout<<"enter the number of element in array \n" ;
    cin>> n ;
    int arr[n];
    cout<<"enter the array element \n";
    for (int i = 0; i < n; i++)
    {
        cout<<"arr["<< i <<"]:";
        cin>> arr[i];
    }
    cout<<"your enter array is this\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    int k ;
    cout<<"enter the number which u want to search"<<endl ;
    cin >> k ;
    int i =0 ;
    int j=n ; 
    while(i<=j)
    {
        mid=(i+j)/2;
        if(arr[mid] == k){
            pos=i+1 ;
            count++ ;
            break;
        }
        else if (arr[mid] > k)
        {
            j=mid-1;
        }
        else if (arr[mid] < k)
        {
            i=mid+1;
        }
         

    }
    if (count==1)
    {
        
        cout<<"number is found at position "<< pos << endl;
    }
    else {
        cout<<"number is not found ";
    }
    
    
    
}