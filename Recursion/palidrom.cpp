/*
problem: 
check string is palidrom or not

*/

#include<iostream>
using namespace std;

bool palidrom(string str,int i,int j)
{

    //base case
    if(i>j)
    {
        return true;
    }
    if(str[i]!=str[j])
    {
        return false;
    }
    else{
//recursion call
   return  palidrom(str,i+1,j+1);
    }
}

int main()
{
    string str="btab";

    int i=0;
    int j=str.length()-1;

    bool ans=palidrom(str,i,j);
    cout<<ans<<endl;

    if(ans)
    {
        cout<<"given string is palidrom";
    }
    else{
        cout<<"givin string is not palidrom";
    }
  
  return 0;
}