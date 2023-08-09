#include <bits/stdc++.h>
using namespace std;
int main(){
	double price, per, tax;
	double newPrice;
	
	cout <<"The original price :";
	cin >> price;
	cout << endl << "The marked-up percentage:";
	cin >> per;
	cout << endl << "The current tax percentage:";
	cin >> tax;
	cout << endl << endl <<"The original price is:" << price << endl;
	cout << "The marked-up rate:" << per << "%" << endl;
	newPrice = price + (price*(per/100));
	cout << "The item's price in store:" << newPrice << "." << endl;
	cout << "The sales tax rate:" << tax << "%" << endl;
	cout << "The sales tax:" << newPrice*tax/100 << "." << endl;
	newPrice = newPrice + (newPrice*tax/100);
	cout << "Final price:" << newPrice  << "." << endl;
	
}