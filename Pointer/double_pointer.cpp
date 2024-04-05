#include<iostream>
using namespace std;

void update(int **p2) {
    //p2 = p2 + 1;
    //only change is availble in function

    //*p2 = *p2 + 1;
    //change in main function

    **p2 = **p2 + 1;
    //pointer addres is increment
}
    void update1(int *p){
        *p = (*p)  *  2;
    }
        void increment(int **p){
        ++(**p);
    }
int main() {

    int i = 5;
    int* p = &i;
    int** p2 = &p;

    cout<< endl << endl <<" every thing is ok.. " << endl << endl ;

//printing the value 
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

//print the address of i variable
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

//print the address of pointer
    cout << &p << endl;
    cout << p2 << endl;

    cout << endl << endl;
    cout<< "before " << i << endl;
    cout<< "before " << p << endl;
    cout<< "before " << p2 << endl;
    update(p2);
    cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;
    cout << endl << endl;

        int num = 110;
        int *ptr = &num;
        increment(&ptr);
        cout << num << endl;

    return 0;
}