#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);

    cout<<"serching 4 in vector-->"<<binary_search(v.begin(),v.end(),4)<<"\n";

    cout<<"lower bound "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<"\n";
    cout<<"uppar bound"<<upper_bound(v.begin(),v.end(),6)-v.begin()<<"\n";

    int a=3;
    int b=7;

    swap(a,b);
   cout<<"after the swapping element a is : "<<a<<"\n";
   cout<<"after the swapping element b is : "<<b<<"\n";
   
   cout<<"max element is : "<<max(a,b)<<"\n";
   cout<<"min element is: "<<min(a,b)<<"\n";

   string ab="Harendra";
   reverse(ab.begin(),ab.end());


   cout<<"after the reverse string--> "<<ab<<"\n";

   rotate(v.begin(),v.begin()+1,v.end());

   cout<<"after the rotation"<<"\n";

   for (int i:v)
   {
    cout<<i<<" ";
   }cout<<"\n";


    return 0;
}