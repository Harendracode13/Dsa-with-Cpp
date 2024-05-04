#include<iostream>
using namespace std;

int partition(int arr[],int s, int e)
{
    int pivot=arr[s];

    int cnt=0;

for(int i=s+1;i<=e;i++)
{
    if(arr[i]<=pivot){
        cnt++;
    }
}
//getting pivt index
int pivotindex=s+cnt;
swap(arr[pivotindex],arr[s]);

int i=s;
int j=e;

while(i<pivotindex && j>pivotindex)
{

    while(arr[i]<pivot)
    {
        i++;
    }
    while(arr[j]>pivot)
    {
        j--;
    }
    if(i<pivotindex && j>pivotindex)
    {
        swap(arr[i++],arr[j--]);
    }
}

return pivotindex;
}

void QuickSort(int arr[],int s,int e)
{

  //base case
  if(s>=e)
  {
    return ;
  }

  int p=partition(arr,s,e);
//left part
  QuickSort(arr,s,p-1);

  //right part
  QuickSort(arr,p+1,e);


}

int main()
{
    int arr[]={5,3,6,1,12,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

