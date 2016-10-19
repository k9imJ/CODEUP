#include <stdio.h>

int num2[10000]={0};
int m=0;
void num10to2(int n)
{
	int i;
	int j=0;
	for(i=1,j=0;;i*=2,j++)
	{
		num2[j]=n%i;
		n/=2;
		if(n==0) {

			m=j;

			break;
		}
	}
	for(i=m-1;i>=0;i--)
	{
		printf("%d",num2[i]);
	}

}

int main()
{
	int n;

	scanf("%d",&n);
	num10to2(n);
}
