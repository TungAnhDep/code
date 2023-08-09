#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
	{
		int a,b;
		string ope;
		cin>>a>>ope>>b;
		if (ope=="+") printf("%0.2f\n",static_cast<double>(a+b));
		else if (ope=="-") printf ("%0.2f\n",static_cast<double>(a-b));
		else if (ope=="*") printf ("%0.2f\n",static_cast<double>(a*b));
		else if (ope=="/") printf ("%0.2f\n",static_cast<double>(a/b));
	}