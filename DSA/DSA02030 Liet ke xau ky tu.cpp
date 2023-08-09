#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[100005],n,k,used[10005],cnt=0;
void in()
	{
		for (int i=1;i<=k;i++) cout << (char)(a[i]+64);
		cout << endl;
	}
void Try(int i)
	{
		for (int j=a[i-1];j<=n;j++)
		{
			a[i]=j;
			if (i==k) in();
			else Try(i+1);
		}
	}
	
int main()
	{	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
		char c; cin >> c;
		cin >> k;
		n=(int) (c-64);
		a[0]=1;
		Try(1);
		}	
