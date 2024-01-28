#include <iostream>
using namespace std;

bool isPossible(int arr[], int b, int S, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < b; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > S || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int partition(int arr[], int b, int S)
{
    int s = 0;
    int totalPage = 0;
    for (int i = 0; i < b; i++)
    {
        totalPage = totalPage + arr[i];
    }
    int e = totalPage;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, b, S, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

void bookAllocation(int arr[], int b, int S)
{
    if (S > b)
    {
        cout << "\nEnter a valid input";
        return;
    }
    else
    {
        int index = partition(arr, b, S);

        int allocatedBook[S];
        int Count = 1;
        int Pagesum = 0;

        for (int i = 0; i <= b-1; i++)
        {
            if (Pagesum + arr[i] <= index && Count <= S)
            {
                Pagesum += arr[i];
            }
            else
            {
                allocatedBook[Count - 1] = Pagesum;
                Pagesum = arr[i];
                Count++;
            }
        }

        allocatedBook[S - 1] = Pagesum;

        cout << "\nBooks allocation per student:\n";
        for (int i = 0; i <= S-1; i++)
        {
            cout << "Student " << i + 1 << ": " << allocatedBook[i] << " pages\n";
        }
    }
}

int main()
{
    int b, S;
    cout << "\nHow many books do you have for allocation: ";
    cin >> b;
    int arr[b];
    cout << "\nEnter the pages of books in ascending order:\n";
    for (int i = 0; i < b; i++)
    {
        cin >> arr[i];
    }
    cout << "\nHow many students to allocate books to: ";
    cin >> S;
    bookAllocation(arr, b, S);
    return 0;
}