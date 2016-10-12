#include <stdio.h>
char buf[222];
char* flag=buf;
int main()
{
	gets(flag);
	for(;;flag++)
	{
		if(*flag=='\0' || *flag==' ')
		{
			if(*flag=='\0') break;
		}
		else printf("%c",*flag);
	}
}