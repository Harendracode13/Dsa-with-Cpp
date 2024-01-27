/*
problem: Find the square root of any number
*/
#include<iostream>
using namespace std;

int sqrinterger(int n) {
    int s = 0;
    int e = n;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (mid * mid == n) {
            return mid;
        } else if (mid * mid < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}

double square_root(int n,int precidant, int tempsol) {

    double ans=tempsol;
    double f=1;
    for(int i=0;i<precidant;i++)
    {
    f=f/10;
    for(double j=ans;j*j<n;j=j+f)
    {
        ans=j;
    }
    }
    return ans;

}

int main() {
    int n;

    cout << "Enter the number for square_root\n";
    cin >> n;
    double temp= sqrinterger(n);
    cout << "Square root is: " << square_root(n,3,temp) << "\n";

    return 0;
}
