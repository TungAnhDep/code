#include <bits/stdc++.h>
using namespace std;
int ngto(int n)
	{
		if (n<2) return 0;
		for (int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return 1;	
	}
int main()	
	{
		int t;
		cin >>t;
		while (t--)
			{	int count=0;
				int n;
				cin>>n;
				if (n<4||n%2!=0) cout <<"";
				else
					{
						for (int i=2;i<=n/2;i++)
							{
								if (ngto(i)&&ngto(n-i))
									{
										cout <<i<<" "<<n-i;
										count=1;
										
										break;
										}	
										
									
							}
						if (count==0) cout <<""<<endl;	
								cout <<endl;	
					}
				
			}
	}
