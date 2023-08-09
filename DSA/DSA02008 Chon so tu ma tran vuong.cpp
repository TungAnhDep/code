#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
// Thuc chat la chon hoan vi voi hang i, cot a[i]
int mt[100][100],a[100],ok,n,k;
// Mang a luu hoan vi, mang mt luu input
void sinh(int a[])
	{
		int i=n-1;
		while (i>=1 && a[i] >= a[i+1]) i--;
		if (i==0) ok=0;
		else
			{
				int j=n;
				while (j>i && a[j] <a[i]) j--;
				swap(a[i],a[j]);
				int l=i+1,r=n;
				while (l<r)
					{
						swap(a[l],a[r]);
						l++;r--;
					}
			}
	}
int main()
	{	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
		cin >> n >> k;
		for (int i=1;i<=n;i++)
			{
				for (int j=1;j<=n;j++)
					cin >> mt[i][j];
			}
		for (int i=1;i<=n;i++) a[i]=i; // Khoi tao hoan vi dau tien
		ok=1;
		vector<vector<int>> v;
		
		while (ok)
				{	int sum=0;// Khoi tao bien sum luu tong
				
					for (int i=1;i<=n;i++)
					{
						sum+=mt[i][a[i]]; // Cong gia tri hang i cot a[i]
					}
				
				if (sum==k) // Neu sum bang k
					{
						vector<int> tmp(a+1,a+n+1); // Tao vector tmp mang gia tri cua mang a
						v.push_back(tmp); // Day vector tmp vao vector v
						}
				sinh(a);	// Sinh hoan vi tiep theo		
			}
		
		cout << v.size()<<endl; // In so luong cau hinh
		for (auto it:v)
			{
				for (int x:it) 
					{
						cout << x <<" "; // In ra phan tu duoc chon
					}
				cout << endl;	
				}	
		cout << endl;		
		}	
