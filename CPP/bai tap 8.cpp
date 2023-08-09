#include <iostream>
#include <string>
using namespace std;
const int secret=11;
const double rate=12.50;
int main()
	{
		int num1,num2,newNum;
		string name;
		double hoursWorked,wages;
		cout <<"Enter 2 numbers:";
		cin>>num1>>num2;
		cout <<"The value of num1= "<<num1<<" and the value of num2= "<<num2<<endl;
		newNum=(num1*2)+num2;
		cout<<"newNum= "<<newNum<<endl;
		newNum=newNum+secret;
		cout <<"updated newNum= "<<newNum<<endl;
		cout <<"Enter your last name: "<<name;
		cin>>name;
		
		cout <<"Enter a decimal number (0-70): ";
		cin>>hoursWorked;
		wages=rate*hoursWorked;
		cout<<"Name: "<<name<<endl;
		cout<<"Pay Rate: "<<rate<<"$"<<endl;
		cout<<"HoursWorked: "<<hoursWorked<<endl;
		cout<<"Salary: "<<wages<<"$"<<endl;
		return 0;	
		
	}