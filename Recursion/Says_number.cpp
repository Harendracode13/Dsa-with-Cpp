/*
problem:
conver digit inti word

example:
input: 123;
output: one two three


*/

#include<iostream>
using namespace std;

void says_number(int num,string arr[])
{

    //base case
    if(num==0)
    {
        return ;
    }

    //processing
    int digit=num%10;
    num=num/10;

    says_number(num,arr);
    cout<<arr[digit]<<" ";

}

int main()
{

    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
     int num;
     cout<<"Enter the number to convert into world"<<endl;
     cin>>num;

     says_number(num,arr);
     return 0;
}