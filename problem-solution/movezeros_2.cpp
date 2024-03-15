/*Given an unsorted array of integers, you have to move the array elements in a way such that all the zeroes are transferred to the end, and all the non-zero elements are moved to the front. The non-zero elements must be ordered in their order of appearance.

For example,
input array : [0, 1, -2, 3, 4, 0, 5, -27, 9, 0]
output array: [1, -2, 3, 4, 5, -27, 9, 0, 0, 0]

This is sencond approch for moveing the zeroes toward the end;

*/
#include <iostream>
#include <vector>

using namespace std;

int search(int i, vector<int> v)
{
    int j = i + 1;
    while (j < v.size())
    {
        if (v[j] != 0)
        {
            return j;
        }
        else
        {
            j++;
        }
    }
    return -1;
}

vector<int> moveZeros(vector<int> v)
{
    int size = v.size();
    int i = 0;

    while (i < size)
    {

        if (v[i] == 0)
        {
            int e1 = search(i, v);
            if (e1 == -1)
            {
                break;
            }
            swap(v[i], v[e1]);
        }
            i++;
    }
    return v;
}
    void print(vector<int> v)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(0);
    v.push_back(6);
    v.push_back(9);

    cout << "before moveing the zeros\n";
    print(v);
    vector<int> ans = moveZeros(v);
    cout << "after moveing the zeros\n";
    print(ans);
    return 0;
}