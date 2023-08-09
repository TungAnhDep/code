#include <bits/stdc++.h>
#define N 20
using namespace std;
int checkPair(int A[],int n,int x)
	{	int count=0;
		for (int i=0;i<n-1;i++)
			{
				for (int j=i+1;i<n;i++)
					{
						if (A[i]+A[j]==x) count++;
					}
			}
		return count;	
	}
int main()
	{
		int t;
		int A[N];
		int k;
		cin >>t;
		int n;
		
		while (t--)
			{	cin>>n>>k;
				int count=0;
				
				for (int i=0;i<n;i++)
					{
						cin >>A[i];
					}
				for (int i=0;i<n-1;i++)
					
				{
				
			}
				
			}
		}	