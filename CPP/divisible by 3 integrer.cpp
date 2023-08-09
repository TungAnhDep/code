#include <iostream>
#include <cmath>
using namespace std;
void desirednumber(){
	int x,y,z,n;
	cin>>x>>y>>z>>n;
	int count =0;
	int max=pow(10,n);
	int min=pow(10,(n-1));
	int temp;
	for(int i=min;i<max;i++){
		if((i%x==0)&&(i%y==0)&&(i%z==0)){
			cout<<i<<endl;
			count++;
			break;
		}
		if(i%x!=0)
		{
			temp=x-i%x;
			i=i+temp-1;
		}else if((i%x==0)&&(i%y!=0))
		{
			temp=y-i%y;
			i=i+temp-1;
		}else{
			temp=z-i%z;
			i=i+temp-1;
		}
	}
	if(count==0){
		cout<<"-1"<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	desirednumber();
}
	return 0;
}