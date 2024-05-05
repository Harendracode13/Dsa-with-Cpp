/*
problem:
reverse the string using recursion

*/

#include<iostream>
using namespace std;

void reverse(string& str,int i,int j)
{
    //base case
    if(i>j)
    {
        return ;
    }

    swap(str[i],str[j]);
    i++;
    j--;

    //processing
    reverse(str,i,j);

}
int main()
{
      string str="dixita";
      int i=0;
      int j=str.length()-1;

      reverse(str,i,j);

     cout<<str;
     return 0;
}