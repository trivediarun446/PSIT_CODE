// Your are in nth stair .  you have only 2 ways to reach nth stair by climbing 1 step or 2 steps then find how many ways to reach the nth stairs 
#include<iostream>
using namespace std ; 
int climbingstair(int n )
{
  if (n<=1)
  {
      return 1 ; 
  }
  return climbingstair(n-2)+climbingstair(n-1);
  
}
int main ()
{
    int n ; 
    cout<<"enter the nth stair"<<endl ; 
    cin>>n ;
    climbingstair(n);
}
