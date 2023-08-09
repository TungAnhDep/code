#include <iostream>
using namespace std;
double commission(double fix, double per, double cost){
	return fix + cost * (1 + per / 100);
}
int main(){
	double fixed, percent, cost, min, max;
	cout << "Enter Fixed commission: ";
	cin >> fixed;
	cout << "Enter Percentage of the commission: ";
	cin >> percent;
	cout << "Enter Purchasing cost: ";
	cin >> cost;
	cout << "Enter Minimum addition: ";
	cin >> min;
	cout << "Enter Maximum addition: ";
	cin >> max;
	cout << "Commission range is: " << commission(fixed, percent, cost) << "$" << endl;
	cout << "Minimum selling price is: " << min + cost << "$" << endl;
	cout << "Maximum selling price is: " << max + cost << "$" << endl;}