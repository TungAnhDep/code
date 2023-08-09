#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,cnt,ok;
string s;
void sinh(string s)
	{
		int i=s.size()-2;
		while (i>=0 && s[i]>=s[i+1]) i--;
		if (i<=0) cout << "BIGGEST\n";
		else
			{
				int j=s.size()-1;
				while (j>i && s[j]<=s[i]) j--;
				swap(s[i],s[j]);
				int l=i+1,r=s.size()-1;
				while (l<r)
					{
						swap(s[l],s[r]);
						l++;r--;
					}
				cout << s << endl;	
			}
	}

int main()
	{	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
		int t; cin >> t;
		while (t--)
			{
				cin >> cnt;
				cin >> s;
				
				cout << cnt <<" ";
				sinh(s);
			}
		}	
