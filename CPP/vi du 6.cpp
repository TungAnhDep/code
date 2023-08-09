#include<iostream>
using namespace std;
const double DECIMAL# = 5.50;
const string blanks = " "
int main()
{
	double height, weight;
	double discount;
	double billingAmount#;
	double bonus;
	int hoursWorked = 45;
	height = 6.2;
	weight = 156;

	cout << height << " " << weight << endln;
	discount = (2 * height + weight) % 10.0;
	double price = 49.99;
	billingAmount = price * (1 – discount - DECIMAL) ;
	DECIMAL = 7.55;
	cout << price << blanks << $ billingAmount << endl;
	bouns = hoursWorked * (PAY_RATE / 50);
	cout << "Bonus = " << bonus << endl;
	return 0;
}