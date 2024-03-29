#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main ()
{
    int a, b;

    cout << "Enter the number of a and b for getting gcd\n";

    cin >> a >> b;
    int ans = GCD(a, b);

    cout << "the answer is :" << ans;

    return 0;
}