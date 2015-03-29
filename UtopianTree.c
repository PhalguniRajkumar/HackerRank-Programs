#include <stdio.h>
int main()
{
	int h,T,i,j;
	scanf("%d",&T);
	int N[T];
	for (i = 0; i < T; ++i)
	{
		scanf("%d",&N[i]);
	}

	for (i = 0; i < T; ++i)
	{
		h=1;
		for (j = 0; j < N[i]; ++j)
		{
			if(j%2==0)
				h=2*h;
			else
				h=h+1;
		}
	
		printf("%d\n",h);
	
	}
	return 0;
}