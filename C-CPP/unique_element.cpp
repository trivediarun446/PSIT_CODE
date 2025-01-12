#include<iostream>
using namespace std;
void getdata()
{
    
}
int unique_number(int *arr, int n)
{
   
for (int i = 0; i < n; i++)
    {
        int j ;
        for (  j = 0; j < n; j++)
        {
            if (arr[i]==arr[j] && i!=j)
            {
                break;
            }
        }
            if(j==n) 
            {
            cout<< arr[i];
            }
        }
}
int main ()
{
    int n ;
    cout<<"enter the number of element";
    cin>>n;
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
     for (int i = 0; i < n; i++)
    {
        cin>> arr[i];

    }
    unique_number(arr ,n );
         free(arr);
        return 0;
    }

    

