#include <bits/stdc++.h>
using namespace std;
int main()
	{
		int m,s;
		cin >>m>>s;
		if (s>9*m||s==0&& m>1)
			{
				cout <<"-1 -1\n";
				return 0;
			}
		int temp=s;
		int be[m];
		int lon[m];
		for (int i=0;i<m;i++)
			{
				if (s>=9)
					{
						lon[i]=9;
						s-=9;
					}
				else if (s!=0)
					{
						lon[i]=s;
						s=0;
						}
				else break;			
				}	
		temp--;
		for (int i=m-1;i>=1;i--)
			{
				if (temp>=9)
					{
						be[i]=9;
						temp-=9;
					}
				else if (temp!=0)
					{
						be[i]=temp;
						temp=0;
						}	
				else break;		
					}	
			be[0]=temp+1;
		for (int i=0;i<m;i++)
			{
				cout <<be[i];
							}
				cout <<" ";
		for (int i=0;i<m;i++) cout <<lon[i];									
	}
