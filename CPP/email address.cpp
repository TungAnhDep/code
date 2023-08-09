#include <iostream>
#include <string>
using namespace std;

void email(string name)
{
	if(name.length()==0){
		return;
	}
	
	cout << (char)tolower(name[0]);
	
	for(int i=1; i<name.length()-1; i++){
		if(name[i]==' '){
			cout << (char)tolower(name[i+1]);
		}
	}
	
	for(int i=name.size()-1; i>=1; i--){
		if(name[i]==' '){
			for(int j=i+2; j<name.length(); j++){
				cout << (char)tolower(name[j]);
			}
			break;
		}
	}
	
	cout << "@ptit.edu.vn";
}

int main()
{
	string name;
	
	getline(cin, name);
	
	email(name);
}