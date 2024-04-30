/*

  problem:
  Do sum of array element

*/

#include<iostream>
using namespace std;

int sum_of_arr(int arr[],int size)
{
   
    //base case
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }
   
   int sum=arr[0]+sum_of_arr(arr+1,size-1);
    return sum;  


}
int main()
{
   int arr[]={2,4,65,6};
   int size=sizeof(arr)/sizeof(arr[0]);
   
   
   int sum=sum_of_arr(arr,size );

   cout<<"sum of array is : "<<sum<<endl;

   return 0;
}