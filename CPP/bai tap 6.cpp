#include <iostream>
#include <string>
using namespace std;
int main()
	{
		string name;
		double studyHours;
		cout <<"Enter your name:";
		cin >>name;
		cout << "Enter your study hours:";
		cin >>studyHours;
		cout <<"Hello,"<<name<<"! on Saturday, you need to study "<<studyHours<<" hours for the exam.";
		return 0;
		
	}