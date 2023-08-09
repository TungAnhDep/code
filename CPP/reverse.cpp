#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
	{
		char a[20];
		scanf ("%s",a);
		int x=strlen(a);
		if (a[x-1]==48)
			{
				for (int i=x-2;i>=0;i--) 
					cout <<a[i];
			}
		
		else {
		
		for (int i=x-1;i>=0;i--)
			{
				cout <<a[i];
			}
	}
		
	}