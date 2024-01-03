//This is bubble sort
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int size = 5;
    int arr[size] = {64, 25, 12, 22, 11};

    cout << "Given array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    // Call the bubbleSort function
    bubbleSort(arr, size);

    cout << "\nSorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
