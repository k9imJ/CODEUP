#include <stdio.h>
int n;
int Sum;
int main()
{
	scanf("%d",&n);
	Sum=n*(n+1)/2;
	for(int i=1;i<n;i++)
	{
		int tmp;
		scanf("%d",&tmp);
		Sum-=tmp;
	}
	
	printf("%d",Sum);
}