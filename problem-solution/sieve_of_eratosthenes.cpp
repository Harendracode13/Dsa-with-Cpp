/*

Given an integer n, return the number of prime numbers that are strictly less than n.
Example :
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.


*/

//this is fist approch for getting count of prime but it tack more time


/*

#include<iostream>
#include<vector>

using namespace std;

bool Isprime(int n)
{
    if(n<=1)
    {
        return false;
    }
   
   for(int i=2;i<n;i++){

    if((n%i)==0)
    {
        return false;
    }
   }
   return true;
}

int countprimes(int n)
{
    int cnt=0;

    for(int i=2;i<n;i++)
    {
        if(Isprime(i))
        {
            cnt++;
        }

    }
    return cnt;
}
int main()
{
      int n;

    cout<<"Enter the number for getting count of prime number\n";
    cin>>n;

    int ans=countprimes(n);
    cout<<"the total prime number is :"<<ans;
    return 0;
}


*/


//this is sencond approch and it take less time complecity
#include <iostream>
#include <vector>
using namespace std;

int countprimes(int n)
{
    int cnt = 0;
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            cnt++;

            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    return cnt;
}

int main()
{
    int n;

    cout<<"Enter the number for getting count of prime number\n";
    cin>>n;

    int ans=countprimes(n);
    cout<<"the total prime number is :"<<ans;
    return 0;
}