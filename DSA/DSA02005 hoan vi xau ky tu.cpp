#include <bits/stdc++.h>
using namespace std;


void Try(string s, int l, int r)
	{
		if (l==r) cout << s << " " ; // Neu chi so trai trung voi chi so phai
		else
			{
				for (int i=l;i<=r;i++)
					{	
						swap(s[l],s[i]); // Doi cho 2 vi tri
						Try(s,l+1,r); // De quy
						swap(s[l],s[i]); // Quay lui	
					}
			}
	}
int main()
	{
		int t; cin >> t;
		while (t--)
			{
				string s; cin >> s;
				
				Try(s,0,s.size()-1);
				cout << endl;	
			}
	
		}	
