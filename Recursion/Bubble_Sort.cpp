/*
   problem:
   Sorting the array by using bubble Sort through Recursion
   
*/

#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    //baase case already sorted
    if(n==0 || n==1)
    {
        return ;
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);

        }
    }

    return bubblesort(arr,n-1);
}

int main()
{
   int arr[]={1,4,2,3,5,7};
   int size=sizeof(arr)/sizeof(arr[0]);

   cout<<"before"<<endl;
   for(int i=0;i<size-1;i++)
   {
    cout<<arr[i]<<" ";
    
   }

   bubblesort(arr,size);

cout<<"after"<<endl;
   for(int i=0;i<size-1;i++)
   {
    cout<<arr[i]<<" ";

  }
  return 0;
}