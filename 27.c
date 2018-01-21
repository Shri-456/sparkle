#include<stdio.h>
#include<conio.h>
void main()
{
char s[25];
int flag=0,n,i;
printf("enter a string of num");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
for(s[i]="0"||s[i]="1"||s[i]="2"||s[i]="3"||s[i]="4"||s[i]="5"||s[i]="6"||s[i]="7"||s[i]="8"||s[i]="9")
{
flag=flag+1;
}
if(flag==0)
{
printf("/yes");
}
else
{
printf("/n no");
}
}
}
