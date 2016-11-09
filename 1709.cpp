#include <stdio.h>
#include <algorithm>

int a[100]={0};

int main()
{
	int n;

	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
	}

	std::sort(a,a+n);

	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
