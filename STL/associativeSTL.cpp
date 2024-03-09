#include <iostream>

// this is set header file
#include <set>

//this is mapping header file
#include<map>

using namespace std;

int main()
{
    //this is set function 
    //set give us sorted and ubniqe element
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(15);
    s.insert(5);
    s.insert(5);
    s.insert(6);

    for(auto i:s)
    {
        cout<<i<<" ";

    }cout<<"\n";

    set<int>::iterator it=s.begin(); //iterator use for get refreance for s.begin.
    it++;

    s.erase(it);

    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<"\n";

  cout<<"5 is precent or not "<<s.count(5)<<"\n";
  set<int>::iterator itr=s.find(5);

  for(auto it=itr;it!=s.end();it++)
  {
    cout <<* it<<" ";
    }cout<<"\n";

    //this is functin for of map

    map<int,string> m;

    m[1]="I";
    m[2]="am a";
    m[13]="college student";

    m.insert({5,"in ahemdabd"});//other methoed to insert the value

    cout<<"finding the -13 -->"<<m.count(-13)<<"\n";

    cout<<"befor erase\n";
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<"\n";
    }

    m.erase(m.begin());

     cout<<"after erase\n";
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<"\n";
    }

auto its=m.find(5);

for(auto i=its; i!=m.end();i++)
{
   cout<<(*i).first<<" ";
}

    return 0;
}