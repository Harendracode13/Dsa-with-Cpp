/*
  problem : find the peak index in moundain arry
  arr[]={1,2,3,4,5,6,5,4,3,2,1,1};
  this array know as mountain array;
  
  so answer is 6 max element is 6 and index is 5.
*/
# include<iostream>
using namespace std;

void max_index(int arr[],int size)
{
    int s=0,e=size-1;
    int mid;

    while(s<e)
    {
     mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1])
        {
          s=mid+1;
        }
        else{
            e=mid;
        }
       mid=s+(e-s)/2;

    }
    cout<<"A max element is "<<arr[mid]<<" at index :"<<mid;
        return ;
}

int main()
{
    int arr[]={0,1,3,5,6,4,2,1,0};
    int size= 9;

    max_index(arr,size);
    return 0;

}

