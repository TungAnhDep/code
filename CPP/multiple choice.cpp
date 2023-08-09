#include <iostream>
using namespace std;
int main()
{
	char A[15];
	A[0]='A';
	A[1]='B';
	A[2]='B';
	A[3]='A';
	A[4]='D';
	A[5]='C';
	A[6]='C';
	A[7]='A';
	A[8]='B';
	A[9]='D';
	A[10]='C';
	A[11]='C';
	A[12]='A';
	A[13]='B';
	A[14]='D';
	
	char b[15];
	b[0]='A';
	b[1]='C';
	b[2]='C';
	b[3]='A';
	b[4]='B';
	b[5]='C';
	b[6]='D';
	b[7]='D';
	b[8]='B';
	b[9]='B';
	b[10]='C';
	b[11]='D';
	b[12]='D';
	b[13]='B';
	b[14]='B';
	int t,count,id;
	char check;
	cin >>t;
	while (t--)
		{
			count =0;
			cin>>id;
			if (id==101)
				{
					cin >>check;
					for (int i=0;i<=14;i++)
						{
							if (check==A[i]) count++;
						}
				}
			if (id==102)
				{
					cin>>check;
					for (int i=0;i<=14;i++)
						{
							if (check==b[i]) count++;
						}
					}	
			printf("%0.2f",static_cast<float>(count)/15*10);
		printf("\n");
			
		}
	
}