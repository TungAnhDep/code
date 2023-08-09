#include <bits/stdc++.h>
using namespace std;
int checknguyento(int s)
	{	
		if (s==0||s==1) return 0;
		for (int i=2;i<=sqrt(s);i++)
			{
				if (s%i==0) return 0;
				
			}
		return 1;	
	}
int checktanggiam(int s)
	{
		
		return 1;
		
		}	
int main()
	{	int t;
		cin>>t;
		while (t--)
		{
		int n;
		cin >>n;
		
		int count=0;
		for (int i=pow(10,n-1);i<pow(10,n);i++)
			{
				if (checknguyento(i)&&checktanggiam(i)) count++;
			}
		cout <<cout<<endl;	
	}
			}		
