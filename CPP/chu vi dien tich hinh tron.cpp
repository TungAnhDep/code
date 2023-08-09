#include <iostream>
#include <iomanip>
using namespace std;
int main()
	{
		unsigned int r;
		cin >>r;
		float c= 2*3.14*r;
		float s= 3.14 * r * r;
		cout <<fixed << setprecision(2) << c << " " << s << endl;
	}
