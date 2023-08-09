#include <iostream>
using namespace std;
int main()
	{
		int t;
		cin >>t;
		while (t--)
			{
				int n;
				cin >>n;
				int a[10000];
				for (int i=0;i<n;i++)
					{
						cin >>a[i];
					}
			
				int count=0;
			
				for (int i=0;i<n;i++)
					{
						if (a[i]!=0)
							{
								cout <<a[i]<<" ";
							 } 
						else 
							{
								count++;
								 }	 
						}
				for (int i=0;i<count;i++)
					{
						cout <<"0"<<" ";
							}		
				cout <<endl;
			
			}
	}
