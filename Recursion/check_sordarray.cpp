/*
problem :
check array is sorted or not by using recursion

*/

#include <iostream>
using namespace std;

bool checksorted(int arr[], int size)
{
  // base case
  if (size == 0 || size == 1)
  {
    return true;
  }
  if (arr[0] > arr[1])
  {
    return false;
  }
  else
  {
    bool ans = checksorted(arr + 1, size - 1);
    return ans;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 9, 6, 8, 12, 15};

  int size = sizeof(arr) / sizeof(arr[0]);

  bool ans = checksorted(arr, size);
  if (ans)
  {
    cout << "array is sorted";
  }
  else
  {
    cout << "Array is not sorted";
  }
  return 0;
}