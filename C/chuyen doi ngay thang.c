#include <stdio.h>
int main()
	{
		int nhap,tuan,ngay,nam;
		scanf ("%d",&nhap);
		nam=nhap/365;
		tuan=(nhap-nam*365)/7;
		ngay=(nhap-365*nam-7*tuan);
		printf ("%d %d %d\n",nam,tuan,ngay);
	}