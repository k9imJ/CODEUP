#include <stdio.h>

int main()
{
	int i=1;
	
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	
	for(i=1;;i++)
	{
		if(i%n==0 && i%m==0 && i%k==0)
		{
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
