/*
problem:
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 
Example :

Input: n = 3
Output: 3

Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 */

#include<iostream>
using namespace std;

int distinways(int n){

    //base case
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }

    int ans=distinways(n-1)+distinways(n-2);

    return ans;
}

int main()
{

    int n;
    cout<<"Which staris you want to go"<<endl;
    cin>>n;

    int ans=distinways(n);

    cout<<"Total number of way to climb Stair : "<<ans<<endl;

return 0;
}