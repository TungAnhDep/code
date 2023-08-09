#include <bits/stdc++.h>
using namespace std;
int x[1000],n,k;
string s[1000];
vector<string> v;
set<string> se;
void inkq()
	{
		for (int i=1;i<=k;i++)
			{
				cout << v[x[i]-1]<<" ";
			}
		cout << endl;	
	}
void Try(int i)
    {
        for (int j=x[i-1]+1;j<=n-k+i;j++)
            {
                x[i]=j;
                if (i==k)
                    {
                        inkq();
                    }
                else Try(i+1);    
            }
    }
int main()
    {
       cin >> n >> k;
       for (int i=1;i<=n;i++)
       	{
       		cin >> s[i];
       		se.insert(s[i]);
		   }
		for (auto x: se) v.push_back(x);
		n=v.size();
        Try(1);
		v.clear();  
        
    }    
