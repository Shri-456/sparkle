#include<stdio.h>
#include<string.h>
void main()
{
	char s[50],m[50];
	int ls,lm;
	scanf("%s",&s);
	scanf("%s",&m);
	ls=strlen(s);
	lm=strlen(m);
	if(ls>lm)
	{
		printf("%s",s);
	}
	else
	{
		printf("%s",m);
	}
}
