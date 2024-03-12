/*
Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance.
Eg

array: 1,2,4,8,9  &  k=3
O/P: 3
Explaination: 1st cow at stall 1 , 2nd cow at stall 4 and 3rd cow at stall 8
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(const vector<int>& arr, int n, int k, int mid) {
    int cowscount = 1;
    int prevPosition = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] - prevPosition >= mid) {
            cowscount++;
            prevPosition = arr[i];
        }
    }

    return cowscount >= k;
}

int Distance(vector<int>& arr, int n, int k) {
    sort(arr.begin(), arr.end());

    int low = 1;
    int high = arr[n - 1] - arr[0];
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(arr, n, k, mid)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int n, k;
    cout << "Enter the number of stalls (n): ";
    cin >> n;
    cout << "Enter the number of aggressive cows (k): ";
    cin >> k;

    vector<int> arr(n);
    cout << "Enter the positions of the stalls: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int Dist = Distance(arr, n, k);
    cout << "Maximum possible minimum distance: " << Dist << endl;

    return 0;
}
