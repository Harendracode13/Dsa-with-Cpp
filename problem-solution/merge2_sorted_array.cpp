/*
  problem:
  Given two sorted arrays, the task is to merge them in a sorted manner.
  
Examples: 
Input: arr1[] = { 1, 3, 4, 5}, arr2[] = {2, 4, 6, 8} 
Output: arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}

Input: arr1[] = { 5, 8, 9}, arr2[] = {4, 7, 8} 
Output: arr3[] = {4, 5, 7, 8, 8, 9} 
*/
#include <iostream>
using namespace std;

int merge2arr(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    // copy remaining elements in arr3 from arr1
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    // copy remaining elements in arr3 from arr2
    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }
    return k;
}


void print(int arr3[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr1[] = {1, 5, 7, 9, 11};
    int arr2[] = {0, 2, 4, 6};

    int arr3[] = {0};

    int size = merge2arr(arr1, 5, arr2, 4, arr3);
    print(arr3, 9);

    return 0;
}