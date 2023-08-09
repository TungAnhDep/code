#include <iostream>
#include <string.h>
using namespace std;
int main()
	{
		int t;
		cin >>t;
		while (t--)
			{
				char c;
				cin >>c;
				if (c>='A'&&c<='Z') {
				putchar(tolower(c));
				cout <<endl;}
				
				if (c>='a'&&c<='z') {
				putchar (toupper(c));
				cout <<endl;}	
			}
	}
