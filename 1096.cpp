#include <stdio.h>

int a[20][20]={0};

int main()
{
	int i,j;
	
	int n;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		int tmp1,tmp2;
		
		scanf("%d %d",&tmp1,&tmp2);
		
		a[tmp1][tmp2]=1;
	}
	
	for(i=1;i<=19;i++)
	{
		for(j=1;j<=19;j++)
		{	
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}	
	
