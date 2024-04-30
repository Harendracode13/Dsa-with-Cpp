/*
problem:
searching key by using recursion
*/

#include<iostream>
using namespace std;

bool Linear_search(int arr[],int size,int key)
{

    //base case
    if(arr[0]==key)
    {
        return true;
    }
    if(size==0)
    {
        return false;
    }
    Linear_search(arr+1,size-1,key);
}

int main()
{
     int n;
    int arr[]={1,3,2,4,5,46,7,9};

  int len=sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter the number which yo want to search"<<endl;
    cin>>n;

   bool ans= Linear_search(arr,len,n);

   if(ans)
   {
    cout<<"key is present"<<endl;
   }
   else{
    cout<<"key is not present";
   }

   return 0;
}
