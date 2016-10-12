#include <stdio.h>

char buf[100010];
char *flag=buf;

int main()
{
	scanf("%s",flag);
	int n1=0,n2=0;
	for(;;flag++)
	{
		if(*flag=='\0') break;
		if(*flag=='(') n1++;
		else n2++;
	}
	printf("%d %d",n1,n2);
}