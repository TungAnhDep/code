#include <iostream>
using namespace std;
double sumCalo(double students, double caloperStu){
	return students * caloperStu;
}
double sumPound(double sumCalo, double caloIn2pounds){
	return sumCalo / caloIn2pounds * 2;
}
int main(){
	double students, caloperStu, caloInNuts;
	cout << "enter number of students: ";
	cin >> students;
	cout << "enter number of calories required for each student: ";
	cin >> caloperStu;
	cout << "number of calories in each pound of nuts: ";
	cin >> caloInNuts;
	double caloIn2pound = 1.7 * caloInNuts;
	cout << "nuts and dried fruit needed : "; 
	cout << sumPound(sumCalo(students, caloperStu), caloIn2pound) << " pound";}