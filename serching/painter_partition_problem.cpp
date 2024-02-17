/*Given are N boards of with length of each given in the form of array, and K painters, such that each painter takes 1 unit of time to paint 1 unit of the board. The task is to find the minimum time to paint all boards under the constraints that any painter will only paint continuous sections of boards, say board {2, 3, 4} or only board {1} or nothing but not board {2, 4, 5}.

Examples:
Input: N = 4, A = {10, 10, 10, 10}, K = 2 
Output : 20
*/


#include <iostream>
using namespace std;

bool Ispossible(int arr[], int b, int p, int mid)
{
    int painters = 1;
    int unitboard = 0;

    for (int i = 0; i < b; i++)
    {
        if (unitboard + arr[i] <= mid)
        {
            unitboard += arr[i];
        }
        else
        {
            painters++;
            if (painters > p || arr[i] > mid)
            {
                return false;
            }
            unitboard = arr[i];
        }
    }
    return true;
}

int partition(int arr[], int b, int p)
{
    int s = 0;
    int totalboard = 0;
    for (int i = 0; i < b; i++)
    {
        totalboard += arr[i];
    }
    int e = totalboard;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (Ispossible(arr, b, p, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

void allocation(int arr[], int b, int p)
{
    int index = partition(arr, b, p);

    int allocatedBoard[p];
    int Count = 1;
    int unitboard = 0;

    for (int i = 0; i < b; i++)
    {
        if (unitboard + arr[i] <= index && Count <= p)
        {
            unitboard += arr[i];
        }
        else
        {
            allocatedBoard[Count - 1] = unitboard;
            unitboard = arr[i];
            Count++;
        }
    }
    allocatedBoard[p - 1] = unitboard;

    cout << "\nBoard allocation per painter:\n";
    int ans=0;
    for (int i = 0; i < p; i++)
    {
            cout << "Painter " << i + 1 << ": " << allocatedBoard[i] << endl;
            ans=allocatedBoard[0];
        if(ans<allocatedBoard[i])
        {
           ans=allocatedBoard[i];
        }
    }
    cout<<"Maxmimum "<<ans<<" unit time required for painting all the board\n";
}

int main()
{
    int board;
    cout << "Enter the number of boards for painting: ";
    cin >> board;
    int arr[board];
    cout << "Enter the number of boards in each box: ";
    for (int i = 0; i < board; i++)
    {
        cin >> arr[i];
    }
    int Numpainter;
    cout << "Enter the number of painters available: ";
    cin >> Numpainter;

    allocation(arr, board, Numpainter);

    return 0;
}
