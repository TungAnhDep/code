#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
	{	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
		int t; cin >> t;
		
			
				while (t--)
					{
						int n; cin >> n;
						int a[100][100];
						for (int j=1;j<=n;j++) cin >> a[1][j];
						int cot=n-1;
						for (int i=2;i<=n;i++)
							{
								for (int j=1;j<=cot;j++)
									{
										a[i][j]=a[i-1][j]+a[i-1][j+1];
										
									}
								cot--;	
								}	
						cot=n;
						for (int i=1;i<=n;i++)
							{	cout <<"[";
								for (int j=1;j<=cot;j++)
									{
										if (j!=cot) cout << a[i][j] <<" ";
										else cout <<a[i][cot]<< "]";	
									}
								cot--;	
								cout << endl;
									}
						cout << endl;			
									
							
					}
			
		}	
