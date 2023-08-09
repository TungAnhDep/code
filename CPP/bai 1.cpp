#include <bits/stdc++.h>
using namespace std;

int main(){
 
    string name; 
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"**********************************"<<endl;
	cout<<"* Programming Assignment 1       *"<<endl;
	cout<<"* Computer Programming I         *"<<endl;
	cout<<"*          Author: "<<name;
	for(int i=1; i<=14-name.size();i++) {
		cout<<" "; 
	}
	cout<<"*"<<endl;
	cout<<"* Due Date: Thursday, Jan. 24    *"<<endl;
	cout<<"**********************************"<<endl;
    return 0;
}