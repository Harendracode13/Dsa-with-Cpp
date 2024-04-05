#include<iostream>
using namespace std;

//if function code 1 or2 line then give it into inline beacuse it have some advantage like
//reusablity is high
//no extra memory useage

//inline function as follow
inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;
}

int main() {

    int a = 1, b = 2;
    int ans = 0; 

    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;

    return 0;
}