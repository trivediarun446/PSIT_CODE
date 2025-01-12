// It is Leet code problem . In this problem , We have to climb a stair and reache to the top or nth position
// but their is condition in which we can take one or two steps to reach the top positon on the stair case.
// Then give me the number of ways to reach the nth position on the stairs
// we are going to solve this problem by using recursion method and We are also solve this problem
// by using dynamic programming


// LOGIC BEHIND THIS CODE IS :- 
    //    if we are in a nth stair than there is only two possiblities 
    // frist possiblity is that we can come on nth stair from the (n-1)th stairs 
    // secound possiblity is that we can come on nth stair from the (n-2) th stairs 
    // so we make two recursive function 
#include <iostream>
using namespace std;
int numways(int n)
{
    // base case 
    if (n < 0)
    {
        return 0; /* less than zero isliye liya hai ki recursive call ke time n-2 ki wajah se value niche 
        jaa skati isliye usko vapas return 0 kr do mtlb ki stair zero mein bhej do */
    }
    if (n == 0)
    {
        return 1;/*hame is mein  zero is liya hai kyu ki agar hm zeroth stairs mein hai to 
        usmein ek hi way */ 
    }
    int ans;
    ans = numways(n - 1) + numways(n - 2);

    return ans;
}
int main()
{
    int n;
    cout << "enter the number of stairs" << endl;
    cin >> n;
    cout<<numways(n);
}