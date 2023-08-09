#include <bits/stdc++.h>
using namespace std;
int x[26];
char a[26];

int n, k;
vector <string> v;

		


void Try(int i)
	{
		for (int j=0;j<=1;j++)
			{
				x[i]=j;
			
		if (i==n-1)
			{
				int dem=0;
				for (int p=0;p<n;p++)
					{
						if (x[p]==1) dem++;
					}
				if (dem==k)
					{
						string tmp;
						for (int p=0;p<n;p++)
							{
								if (x[p]==1) tmp+=a[p];
							}
						v.push_back(tmp);	
					}
				}
		else Try(i+1);			
			}
		}
	
void in()
	{
		sort(v.begin(),v.end());
		for (int i=0;i<v.size();i++)
			{
				cout << v[i]<< endl;
			}
		}	
int main()
	{
		int t; cin >> t;
		while (t--)
			{
				cin >> n >> k;
				for (int i = 0;i<n;i++)
					{
						a[i]=char(int ('A')+i);
					}
				v.clear();	
				Try(0);
				in();	
				
			}
		}	
