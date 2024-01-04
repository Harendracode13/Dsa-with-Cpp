#include<iostream>
using namespace std;

int partion(int arr[], int s,int e)
{
   int pivot=arr[s];
   int count=0;

   for(int i=s+1;i<=e;i++)
   {
    if(arr[i]<=pivot)
    {
        count++;
    }
   }
   //place pivot at right place
    int pivotIndex= s + count;
    swap(arr[pivotIndex],arr[s]);
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex)
    {
      while(arr[i]<=pivot)
      {
        i++;
      }
      while(arr[j]>pivot)
      {
        j--;
      }
      if(i<pivotIndex && j>pivotIndex)
      {
        swap(arr[i++],arr[j--]);
      }
    }
    return pivotIndex;
}

 void QuickSort(int arr[],int s,int e)
 {
     //base case
     if(s>=e)
     {
        return;
     }

     int p=partion(arr,s,e);

     //sorting left part
     QuickSort(arr,s,p-1);
       
    //sorting right part
    QuickSort(arr,p+1,e);
 }
int main()
{
  int arr[10]={10,20,3,42,35,6,43,2,8,9};
  int n=10;

  QuickSort(arr,0,n-1);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<"\n";
  return 0;
}