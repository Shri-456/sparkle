#include<stdio.h>
#include<conio.h>
void main()
{
int t=0,i=0;
char s[20];
printf("enter a string ");
scanf("%s",s);
for(i=0;i<=s[20];i++)
{
while(s[i]!='\n')
{
t=t++;
}
printf("total words are %d",t);
}
}
