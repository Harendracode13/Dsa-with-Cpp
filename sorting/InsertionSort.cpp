#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
            arr[j+1]=temp;
    }
}


int main()
{
    int arr[]={45,1,42,67,12,3,87};
   int n=sizeof(arr)/sizeof(arr[0]);
     
     insertionSort(arr,n);
     cout<<"this is sorted Array\n";
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
     }
  
    return 0;
}