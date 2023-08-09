#include <iostream>
#include <math.h>
using namespace std;
int countOddEven(int n)
	{	int even=0;
		int odd=0;
		
		while (n>0)
			{
				int digit=n%10;
				if (digit%2==0) even++;
				else odd++;
				n/=10;
			}
		if (even!=odd) return 0;
		return 1;	
	}
int main()
	{
		int n;
		do
			{
				cin >>n;
			} while (n<=1||n>=7||n%2!=0);
		int count=0;	
		for (int i=pow(10,n-1);i<pow(10,n);i++)	
			{
				if (countOddEven(i)) {
				cout <<i<<" ";
				count++;}
			if (count%10==0) cout <<endl;		
				
			
				
			}
	}
