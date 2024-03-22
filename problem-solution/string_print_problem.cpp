//take string as in input and print it

#include <iostream>
#include <sstream>
#include<string>

using namespace std;

int main()
{

	string s ;
    cout<<"enter the string\n";
    cin>>s;
	stringstream obj(s);
	// string to store words individually
	string temp;
	// >> operator will read from the stringstream object
	while (obj >> temp) {
		cout << temp << endl;
	}
	return 0;
    
}