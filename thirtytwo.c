#include<stdio.h>
#include<conio.h>
void main()
{
int t=0,i;
char s[20];
printf("enter a string ");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
while(s[i]!=' ')
{
t=t++;
}
printf("total words are %d",t);
}
}
