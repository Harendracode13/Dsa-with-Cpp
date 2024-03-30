#include<iostream>
using namespace std;

int main()
{
    int i=9;
    int *ptr=&i;

    //this bad practic of declaring the pointer
   // int *try;

    //intent of this when we declaring the pointer assign it null pointer

    int *try2=0;

    cout<<"value of i is: "<<i<<"\n";
    cout<<"value of i by using pointer is : "<<*ptr<<"\n";

    cout<<"addres of i : "<<&i<<"\n";
    cout<<"addres of i by using pointr "<<ptr<<"\n";

    int num=5;
    int a=num;
    cout<<"befor increament "<<num<<"\n";
    a++;
    cout<<"after increament "<<num<<"\n";

    int *p=&num;
    cout<<"befor pointer increament "<<num<<"\n";
    (*p)++;
    cout<<"after pointer increament "<<num<<"\n";

//copy thw pointer
int *q=p;
cout<<q<<" - "<<p<<"\n";
cout<<*q<<" - "<<*p<<"\n";


    return 0;
}