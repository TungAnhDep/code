#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin >>t;
	while(t--)
	{
		int j;
		string code;
		cin >> code;
		for(int i=0;i<code.size();i++)
		{
			if(code[i]=='8' && code[i-1] == '0' && code[i+1] == '4')
			{
				j=i+2;
				
			}
		}
		for(int i=0;i<=j-4;i++)
		{
			cout<< code[i] ;
		}
		for(int i=j;i<code.size();i++)
		{
			cout << code[i] ;
		}
		cout << endl;
	}
	
	
}
