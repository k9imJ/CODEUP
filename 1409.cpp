#include <stdio.h>
int a[11]={0};
int main()
{
	for(int i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	int n;
	scanf("%d",&n);

	printf("%d",a[n]);
	
}