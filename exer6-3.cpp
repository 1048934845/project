#include <iostream.h>
#define M 4
#define N 4
void main()
{
	int i,j;
	int a[M][N];
	for(i=0;i<=M-1;i++)
		for(j=0;j<=N-1;j++)
			if(M>N)
				a[M][N]-=1;
			else if(M<N)
				a[M][N]+=1;
		cout<<a[M][N]<<endl;
}

