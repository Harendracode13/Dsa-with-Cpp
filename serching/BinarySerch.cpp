#include<iostream>
using namespace std;

int BinarySerch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(key==arr[mid])
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main()
{
   int arr[6]={12,5,6,30,34,23};
   int arr1[5]={13,3,61,50,4};

   int index=BinarySerch(arr,6,30);
   cout<<"the key is present at index :"<<index<<"\n";

   int index1=BinarySerch(arr1,5,61);
   cout<<"the key is present at index :"<<index1<<"\n";

    return 0;
}
