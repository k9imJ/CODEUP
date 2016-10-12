#include <stdio.h>

int a[101]={0};
int n;
void rota(int k)
{
	int i;

	for(i=0;i<n;i++)
	{
		printf("%d ",a[i+k]);
	}
	printf("\n");
}

int main()
{
	int i;

	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		a[i+n]=a[i];
	}
	for(i=1;i<=n;i++)
	{
		rota(i);
	}
}