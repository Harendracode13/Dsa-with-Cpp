#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
int s=0,e=v.size()-1;

while(s<=e)
{
    swap(v[s],v[e]);
    s++;
    e--;
}
return v;
}

void print(vector<int> v)
{
    
    for(auto i:v)
    {
    cout<<i<<" ";
    }cout<<"\n";

}


int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(11);
    v.push_back(4);
    v.push_back(23);

   cout<<"before the reverse\n";
   print(v);
    vector<int> ans=reverse(v);
    cout<<"after the reverse\n";
    print(ans);

    return 0;

}