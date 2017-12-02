#define N 20
#include <iostream.h>
void main()
{
	int n,a[N]={1,1,0};
	for(n=2;n<N;n++)
	{
		a[n]=a[n-1]+a[n-2];
	}
	for(n=0;n<20;n++)
	cout<<a[n]<<endl;
}

