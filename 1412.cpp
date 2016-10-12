#include <stdio.h>

char buf[100];
char *flag=buf;
int check[211]={0};

int main()
{
	gets(flag);

	for(;;flag++)
	{
		if(flag=='\0') break;

		if(( *flag<='z' && *flag>='a') || (*flag>='A' && *flag<='Z') )
		{
			check[(int)(*flag)]++;
		}

	}
	for(int i='a';i<='z';i++)
	{
		printf("%c:%d\n",i,check[i]);
	}

}