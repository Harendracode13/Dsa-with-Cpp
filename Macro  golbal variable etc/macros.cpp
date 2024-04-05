#include<iostream> 
using namespace std;

#define PI 3.14//decalres of mecros

//advanges of macros : not take memory simply replace the value when we use.

int main() {

    int r = 5;
    //double pi = 3.14;

    double area = PI * r * r;

    cout << "Area is " << area << endl;

    return 0;
}