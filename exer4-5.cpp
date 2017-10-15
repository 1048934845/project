#include <iostream.h>
void main()
{
	int x,y;

	for (x=1;x<=99;x++)
	{
		y=x*x-x;
		if (x<10&&y%10==0)
			cout<<x<<" ";
		if (x>9&&y%100==0)
			cout<<x<<" ";
	}
}



