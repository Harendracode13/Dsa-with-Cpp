#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> p) {
    for (auto i : p) {
        cout << i << " ";
    }
    cout << "\n";
}

vector<int> reverse(vector<int> v) {
    int s = 0, e = v.size() - 1;

    while (s <= e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

vector<int> arraysum(vector<int> &a, int n, vector<int> &b, int m) {
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;

    int carry = 0;

    while (i >= 0 && j >= 0) {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    while (carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
  reverse(ans);
    return ans;
}

int main() {
    int n, m;

    cout << "How many elements do you want to add in array1: ";
    cin >> n;

    vector<int> arr1(n);
    cout << "Enter elements for array1: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "How many elements do you want to add in array2: ";
    cin >> m;

    vector<int> arr2(m);
    cout << "Enter elements for array2: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> ans = arraysum(arr1, n, arr2, m);
    cout << "Sum of arrays: ";
    print(ans);

    return 0;
}
