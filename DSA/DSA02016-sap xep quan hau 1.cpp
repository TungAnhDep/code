#include <bits/stdc++.h>
using namespace std;
int n, x[100],cot[100],d1[100],d2[100],cnt=0;
void Try(int i)
	{
		for (int j=1;j<=n;j++)
			{
				if (cot[j]==0 && d1[i-j+n]==0 && d2[i+j-1]==0)
					{
						x[i]=j;
						cot[j]=d1[i-j+n]=d2[i+j-1]=1;
						if (i==n)
							{
								++cnt;
							}
						else
							{
								Try(i+1);
								}	
						cot[j]=d1[i-j+n]=d2[i+j-1]=0;		
					}
			}
	}
int main()
	{
		int t; cin >> t;
		while (t--)
			{
				cin >> n;
				
				Try(1);	
				cout << cnt << endl;
			}
		}	
