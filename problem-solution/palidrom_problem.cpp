/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example :
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

*/
#include <iostream>
#include <vector>
using namespace std;

bool palidrom(char a[], int n)
{

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}
int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    cout << "Enter the string for check palidrom or not\n";

    cin >> name;
    int len = getlength(name);

    bool check = palidrom(name, len);

    string w = check ? " " : " not ";
    string y = check ? "Yes" : " No ";

    cout << y << ", string is" << w << "palidrom\n";

    return 0;
}