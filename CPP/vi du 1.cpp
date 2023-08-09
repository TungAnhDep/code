#include <iostream>
using namespace std;
double areaCompute(double length, double width){
    
    double area = length*width;
    return area;
}

double perimeterCompute(double length, double width){
	
	double perimeter = 2*(length + width);
	return perimeter;
}

int main()
{
    double length;
    double width;
    double area;
    double perimeter;
    cout << "Program to compute and output the perimeter and " 
         << "area of a rectangle." << endl;
	cout << "Length = ";
	cin >> length;
	
	cout << "Width = ";
	cin >> width;
		          

    area = areaCompute(length, width);
    perimeter = perimeterCompute(length, width);
    cout << "Length = " << length << endl;
    cout << "Width = " << width << endl;
    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;
    return 0;
}