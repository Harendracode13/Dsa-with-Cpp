#include<iostream>
using namespace std;

int fibonacci(int num)
{
   
    int count=0;
    if(num==count )
    {
        return 0;
    }
    if(num==1)
    {
        return 1;
    }

    int ans=fibonacci(num-1)+fibonacci(num-2);
    
    return ans;
}

int main()
{
    int num;
    cout<<"which index you want to print"<<endl;
    cin>>num;

    int ans=fibonacci(num);

    cout<<"Answer is : "<<ans;
    return 0;
   
}