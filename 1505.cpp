#include <stdio.h>
int vec[4][2]={ {0, 1}, {1, 0}, {0, -1}, {-1, 0}};
int map[51][51]={0};
int v1,v2;
int m1;
int n;

int main()
{
	scanf("%d",&n);
	int i;
	for(i=1;i<=n*n;i++)
	{
		int tmp1=vec[m1][0];
		int tmp2=vec[m1][1];

		if( (v1+tmp1>0 && v1+tmp1<=n) && (v2+tmp2>0 && v2+tmp2<=n) && map[v1+tmp1][v2+tmp2]!=0) 
			 {
			 	map[v1+tmp1][v2+tmp2]=i;
			 	v1+=tmp1;v2+=tmp2;
			 }
		else {
			m1++;
			if(m1==4) m1=0;
			tmp1=vec[m1][0];
			tmp2=vec[m1][1];
			map[v1+tmp1][v2+tmp2]=i;
			 	v1+=tmp1;v2+=tmp2;


		}


	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}

}
