#include <iostream>

using namespace std;
double Invested(double number, double buy){
	return number * buy;
}
double Received(double number, double sell){
	return number* sell;
}
double ServiceCharges(double x, double y){
	return (x + y) * 1.5 / 100;
}
int main(){
	double sold, buy, sell;
	cout << "enter number of shares sold: ";
	cin >> sold;
	cout << "purchase price of each share: ";
	cin >> buy;
	cout << "selling price of each share: ";
	cin >> sell;
	double i = Invested(sold, buy);
	double r = Received(sold, sell);
	double s = ServiceCharges(i, r);
	cout << "Number Invested: " << i << endl;
	cout << "Number Received: " << r << endl;
	cout << "Service Charges: " << s << endl;
	if (r - i - s <= 0){
		cout << "Total Loss: " << r - i - s << endl;
	}
	else{
		cout << "Total Gain: " << r - i - s << endl;
	}
}