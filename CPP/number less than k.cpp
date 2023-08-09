#include <bits/stdc++.h>
using namespace std;
int minSwap(int A[],int n,int k)
	{
		int count=0;
		for (int i=0;i<n;i++)
			{
				if (A[i]<=k) count++;
				
			}
		int count1=0;
		for (int i=0;i<count;i++)
			{
				if (A[i]>k) count1++;
				}	
		int ans=count1;
		for (int i=0,j=count;j<n;i++,j++)
			{
				if (A[i]>k) --count1;
				if (A[j]>k) ++count1;
				ans=min(ans,count1);
			}
		return ans;	
	}
int main()
{
	int t;
	int A[20];
	int n;
	cin >>t;
	int k;
	while (t--)
		{
			cin>>n>>k;
			for (int i=0;i<n;i++)
				{
					cin >>A[i];
					
				}
			cout<<minSwap(A,n,k)<<endl;	
		}
}
	