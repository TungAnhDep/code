#include <iostream>
using namespace std;
double sumCompute(double num1,double num2,double num3,double num4,double num5)
	{
		double sum=num1+num2+num3+num4+num5;
		
		return sum;
	}
int main()
	{
		double num1,num2,num3,num4,num5;
		cout <<"Enter 5 numbers:";
		cin>>num1>>num2>>num3>>num4>>num5;
		double sum=sumCompute(num1,num2,num3,num4,num5);
		cout<<"Sum is:"<<static_cast<int>(sum)<<endl;
		return 0;
		}	