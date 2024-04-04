#include <iostream>
using namespace std;

void print(int *temp)
{
    cout<<*temp;
}
void update(int *temp){
    //p=p+1 increment only in this function

    *temp=*temp+1;
}

int main()
{
    int arr[] = {
        1,
        5,
        3,
        4,
        5,
    };
    cout << "first addres is " << arr << endl;

    cout << "sencond address is " << arr + 1 << endl;
    // by derefressing
    cout << "value at firlst address is " << *(arr) << endl;

    // address of 3 index element
    cout << "third address is " << &arr[2] << endl;

    // increment pointer and access value
    cout << "value at sencond address is :" << *(arr + 1) << endl;

    // anthor way to access value
    cout << "value at fourth position " << arr[3] << endl;

    int i = 3;
    cout << "value fourth position " << i[arr] << endl;

    int temp[10];
    cout << sizeof(temp) << endl;

    int *ptr = &temp[0];
    cout << "addres required " << sizeof(ptr) << " bit" << endl;

    cout << "value required " << sizeof(*ptr) << " " << endl;

    int *p = &arr[0];
    cout << "address of pointer " << &p << endl;

    char ch[6] = "abcde";

    //this is print whole string
    cout << ch << endl;

    char *c=&ch[0];

    //in this this is not print address it print string
    cout<<"address of first index :"<<c<<endl;

    //char *c1="abcde";//don't do this in any sitution
    int val=5;
    int *p1=&val;
    print(&val)<<endl;

    cout<<"before"<<*p1<<endl;
    update(&val);
    cout<<"after"<<*p1<<endl;

    return 0;
}