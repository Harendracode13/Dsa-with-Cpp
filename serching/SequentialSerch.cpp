#include<iostream>
using namespace std;

int SequentialSerch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={4,7,22,34,1,6,79,2};
    int size=8;

    int index=SequentialSerch(arr,size,6);

    if(index== -1)
    {
        cout<<"the key is not presant"<<"\n";
    }
    else{
        cout<<"the key presant at index: "<<index;
    }
    return 0;
}