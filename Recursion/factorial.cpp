#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }

    int ans=n * factorial(n-1);
    return ans;
}

int main()
{

    int num;
    cout<<"enter the num for finding factorial"<<endl;
    cin>>num;

   int ans= factorial(num);
   cout<<"answer is :"<<ans;
    return 0;
    
}