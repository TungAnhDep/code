#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double totalMilk,milkCartons,cost,profit;
    cout<<"Enter the total amount of milk: ";
    cin>> totalMilk ;
        milkCartons= (int)(totalMilk/3.78);
    cout<<"Number of milk cartons needed :"<<milkCartons<<endl;
        cost = totalMilk * 0.38;
    cout<<"Cost :" <<cost<<endl; 
        profit = milkCartons * 0.27;
    cout<<"Profit :"<<profit<<endl;
}