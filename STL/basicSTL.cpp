#include <iostream>
#include <array>

// this is vector library
#include <vector>

// this is Queue header file
#include <deque>

// this is linklist headerfile
#include <list>

// this is stack headerfile
#include <stack>

//this prirory queue header file
#include<queue>

using namespace std;

int main()
{
    // declaretion of array

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();
    cout << "size of array is: " << size << "\n";

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "\n";

        /* code */
    }

    cout << "Elenment at 2nd position is " << a.at(2) << "\n";

    cout << "empty or not" << a.empty() << "\n";

    cout << "first element is: " << a.front() << "\n";
    cout << "last element is :" << a.back() << "\n";

    // using vector libary function
    // vector is dynamic array
    // decalaring vector

    vector<int> v;

    cout << "capacity-->" << v.capacity() << "\n";

    v.push_back(1);
    cout << "capacity-->" << v.capacity() << "\n";

    v.push_back(2);
    cout << "capacity-->" << v.capacity() << "\n";

    v.push_back(3);
    cout << "capacity-->" << v.capacity() << "\n";

    cout << "size-->" << v.size() << "\n";

    cout << "element at 2nd index " << v.at(2) << "\n";

    cout << "front " << v.front() << "\n";
    cout << "back" << v.back() << "\n";

    cout << "before pop"
         << "\n";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n";

    v.pop_back();

    cout << "after pop"
         << "\n";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n";

    // more functanlity of vector

    vector<int> b(5, 1);
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << "\n";

    // copy all data fo one vecor to other
    vector<int> last(b);

    for (int i : last)
    {
        cout << i << " ";
    }
    cout << "\n";

    // Queue is function is use

    deque<int> q;

    q.push_back(1);
    q.push_front(2);
    q.push_back(4);

    for (int i : q)
    {
        cout << i << " ";
    }
    cout << "\n";

    // pop function
    q.pop_front();
    for (int i : q)
    {
        cout << i << " ";
    }
    cout << "\n";

    // getting random element
    cout << "first index element is :" << q.at(1) << "\n";

    cout << "Empty or not :" << q.empty() << "\n";

    // erase function
    cout << "befor erase :" << q.size() << "\n";
    q.erase(q.begin(), q.begin() + 1);
    cout << "after erase :" << q.size() << "\n";
    for (int i : q)
    {
        cout << i << " ";
    }
    cout << "\n";

    // doubly linklist function other function work as queue function
    list<int> l;
    l.push_back(2);
    l.push_front(3);

    for (int i : l)
    {
        cout << "i"
             << " ";
    }
    cout << "\n";

    // stack function

    stack<string> s;

    s.push("i");
    s.push("am");
    s.push("student");

    cout << "Top element" << s.top() << "\n";
    s.pop();

    cout << "Top element" << s.top() << "\n";

    cout << "size of stact" << s.size() << "\n";
    cout << "Empty or not" << s.empty() << "\n";

    //priority queue explantion
    
    priority_queue<int> maxi;

    priority_queue<int, vector<int>,greater<int> > mini;

  maxi.push(1);
  maxi.push(2);
  maxi.push(3);
  maxi.push(4);

  int n=maxi.size();
  for(int i=0;i<n;i++)
  {
    cout<<maxi.top()<<" ";
    maxi.pop();
  }cout<<"\n";

  mini.push(1);
  mini.push(2);
  mini.push(3);
  mini.push(4);

  int n=mini.size();
  for(int i=0;i<n;i++){
    cout<<mini.top()<<" ";
    mini.pop();

  }cout<<"\n";

  cout<< "maxi is empty or not "<<maxi.empty()<<"\n";
  cout<< "mini is empty or not "<<mini.empty()<<"\n";


    return 0; 
}