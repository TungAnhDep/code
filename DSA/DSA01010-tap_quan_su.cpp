#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int t; cin >> t;
		while (t--)
			{
				int n,k;
				cin >> n >> k;
				int d[105] = {0};
				int a[k+5];
				for (int i=1;i<=k;i++)
					{
						cin >> a[i];
						d[a[i]]=1;
					}
				int i=k;	
				while (i>=1 && a[i]==n-k+i)
					{
						i--;
						}	
				if (i<=0) cout << k << endl;
				else
					{
						a[i]++;
						for (int j=i+1;j<=k;j++)
							{
								a[j]=a[j-1]+1;
								
							}
						for (int j=1;j<=k;j++)
						{
							d[a[j]]=0;
						}
						int cnt=0;		
						for (int j=1;j<=40;j++)
						{
							if (d[j]) cnt++;	
							}		
						cout << cnt << endl;			
					}
					
			}
		}	
