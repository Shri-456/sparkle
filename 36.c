#include<stdio.h>
void main()
{
char ch[50];
int i,c=0;
printf("enter a line");
scanf("%s",ch);
for(i=0;ch[i]!='\0';i++)
{
if(0<=ch[i]<=9)
{
c++;
}
}
}
