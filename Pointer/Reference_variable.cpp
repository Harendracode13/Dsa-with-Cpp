#include <iostream>
using namespace std;

/* this declaring of the function  is bad practies so don't use it

int& func(int a) {
    int num = a;
    int& ans = num;
    return ans;
}

*/

/* alsodeclaring of the function  is bad practies so don't use it

int* fun(int n) {
    int* ptr = &n;
    return ptr;
}

*/

void update1(int n)
{
    n++;
}

//update value through reference
void update2(int &n)
{
    n++;
}

//upade value through pointer
void update3(int *n)
{
    *n=*n+1;
}

int main()
{

    int i = 5;

    // create a ref variable

    int &j = i; // here j is a reference variable j is pointing to address of i

    cout << i << endl;
    i++;
    cout << i << endl; // we access the value of i by both i&j variable
    j++;
    cout << i << endl;
    cout << j << endl;

    int n = 5;

    cout << "Before " << n << endl;
    update1(n);
    cout << "After " << n << endl;

    cout << "Before " << n << endl;
    update2(n);
    cout << "After " << n << endl;

    cout<<endl;

    cout << "Before " << n << endl;
    update2(n);
    cout << "After " << n << endl;


    return 0;
    
}