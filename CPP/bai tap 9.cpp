#include <iostream>
using namespace std;
double averageScore(double test1,double test2,double test3,double test4, double test5)
	{
		double sum=(test1+test2+test3+test4+test5)/5;
		return sum;
	}
int main()
	{
		double test1,test2,test3,test4,test5;
		cout<<"Enter 5 test scores:";
		cin>>test1>>test2>>test3>>test4>>test5;
		
		double average=averageScore(test1,test2,test3,test4,test5);
		cout<<"Average is:"<<average<<endl;
		return 0;
		}	