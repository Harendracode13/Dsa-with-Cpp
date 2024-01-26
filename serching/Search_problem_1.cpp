/*
Problem :You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.
your array element 0 0 1 1 2 2 2 2 
input 2
output:
       index 1 : 4 
       index 2 : 7
*/

#include <iostream>
using namespace std;

int firstindex(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid, ans = -1;

    while (s <= e)
    {
        mid = s + (e - s) / 2;

        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
    }
    return ans;
}

int lastindex(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid, ans = -1;

    while (s <= e)
    {
        mid = s + (e - s) / 2;

        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {0, 0, 0, 0,1,1, 2, 2, 2, 2, 2,5, 6,9};
    int size = 13;
    int key;
    cout << "Enter the Number you Want to search index: ";
    cin >> key;

    int first = firstindex(arr, size, key);
    int second = lastindex(arr, size, key);

    cout << "First index of " << key << " is: " << first << endl;
    cout << "Last index of " << key << " is: " << second << endl;

    return 0;
}
