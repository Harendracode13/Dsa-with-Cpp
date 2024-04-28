#include <iostream>
using namespace std;

//printing in decending order
void printDescending(int n)
{
    
    if (n == 0)
    {
        cout << "printing is done" << endl;

        return;
    }
    cout << "number is :" ;
    cout << n <<" ";

    printDescending(n - 1);

    return;
}

//printing in acending
void printAscending(int n)
{
    
    if (n == 0)
    {
        cout <<endl<< "printing is done" << endl;

        return;
    }

    printAscending(n - 1);

    cout << "number is :";
    cout << n <<" ";

    return;
}
int main()
{
    int n;
    cout<<"enter the number for printing"<<endl;
    cin >> n;
    
    printDescending(n);

    printAscending(n);


    return 0;
}