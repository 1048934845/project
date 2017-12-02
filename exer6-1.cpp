#include <iostream.h>
#define N 100
void main()
{
	int i,j,k,max,min,t;
	int a[N];
	for(i=0;i<N;i++)
		cin>>a[i];
	max=min=a[0];
	j=k=0;
	for(i=0;i<N-1;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			j=i;
		}
		else if(min>a[i])
		{
			min=a[i];
			k=i;
		}
	}
	if(j!=k)
	{
		t=a[j];
		a[j]=a[k];
		a[k]=t;
	}
	for(i=0;i<N;i++)
	cout<<a[i];
}



		