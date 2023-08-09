#include <iostream>
using namespace std;
int main()
	{
		int secondsEclapsed,hours,minutes,seconds;
		const int secondsPermin=60;
		const int secondsPerhour=60*secondsPermin;
		cout <<"Please enter the time:";
		cin >> secondsEclapsed;
		hours=secondsEclapsed/secondsPerhour;
		secondsEclapsed=secondsEclapsed%secondsPerhour;
		minutes=secondsEclapsed/secondsPermin;
		seconds=secondsEclapsed%secondsPermin;
		cout <<hours<<":"<<minutes<<":"<<seconds;
		return 0;
		
	}