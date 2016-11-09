#include <stdio.h>

int a[100010]={0};

int main()
{
	int n;
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int tmp;
		scanf("%d",&tmp);
		a[tmp]++;
	}

	for(i=0;i<=100000;i++)
	{
		for(int j=1;j<=a[i];j++)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
