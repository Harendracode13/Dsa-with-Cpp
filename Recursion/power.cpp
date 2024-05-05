/*
problem: getting power of any number

input: 2^4 a=2 b=4
output: 16

*/

#include <iostream>
using namespace std;

int power(int a, int b)
{

    // base case

    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    // recursion call
    int ans = power(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

int main()
{
    int a;
    int b;
    cout << "Enter the a and b for getting power " << endl;

    cin >> a >> b;

    int ans = power(a, b);

    cout << "Answer is : " << ans;

    return 0;
}