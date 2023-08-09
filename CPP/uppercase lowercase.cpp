#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
	{
		int n;
		cin >>n;
		char ch;
		for (int i=0;i<n;i++)
			{
				cin>>ch;
				if (ch>='A' && ch<= 'Z')
					{
						putchar (tolower(ch) );
						cout <<"\n";
					}
				else if (ch>='a' && ch<='z')
					{
						putchar (toupper(ch) );
						cout <<"\n";
					}
			}
	}