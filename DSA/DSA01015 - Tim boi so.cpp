#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,ok;
string s;
vector<ll> v; // Luu cac xau nhi phan sau khi chuyen thanh ll
int a[10005]; // Luu cac boi so
void sinh(string &s)
	{
		int i = s.size()-1;
		while (i>=0 && s[i]=='9')
			{
				s[i]='0';
				i--;
			}
		if (i<0) ok=0;
		else
			s[i]='9';
	}
int main()
	{	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
    	int t; cin >> t;
		while (t--)
		{
		
    	string s(13,'0'); // Tao lap string s do dai 13 gom tat ca phan tu bang 0
    	sinh(s); // Sinh xau tiep theo de bo qua truong hop 000000
    	ok=1;
    	while (ok)
    		{
    			v.push_back(stoll(s)); // Chuyen string s thanh so long long roi day vao vector
    			sinh(s);
			}
		for (int i=1;i<=500;i++) //Duyet cac so n tu 1 den 500
			{
				for (ll x:v) // Duyet cac phan tu trong vector
					{
						if (a[i]==0 && x%i == 0) // Neu nhu so x lan dau xuat hien
							{
								a[i]=x; // Danh dau phan tu x trong mang a
							}
					}
				}	
		
			
				cin >> n;
				cout << a[n] << endl; // In mang a
				v.clear();
				memset(a,0,sizeof(a));
		}	
	}
