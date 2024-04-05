#include<iostream>
using namespace std;

//this is global varibal 
//global variable declare outside of all function
int score = 15;  //this is bad practic beacuse if we change in any function it reflet in the function


void a(int& i) {

    cout << score << " in a" << endl;
    score++;
    char ch = 'a';
    cout << i << endl;
}

void b(int& i) {
    cout << score << " in b" << endl;
    cout << i << endl;
}

int main() {
    cout << score << " in main" << endl;
    int i = 5;
    a(i);
    b(i);

    return 0;
}