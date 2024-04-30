/*
  problem:
  Search element in array by using recursion binary search

*/

#include <iostream>
using namespace std;

bool Binary_search(int arr[], int s, int e, int key)
{

    // base case
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        Binary_search(arr, mid + 1, e, key);
    }
    else
    {
        Binary_search(arr, s, mid - 1, key);
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 12, 14, 16, 70};
    int s = 0;
    int e = (sizeof(arr) / sizeof(arr[0])) - 1;
    int key;
    cout << "Enter the key for search" << endl;
    cin >> key;

    bool ans = Binary_search(arr, s, e, key);

    if (ans)
    {
        cout << "key is present";
    }
    else
    {
        cout << "key is not present";
    }

    return 0;
}
