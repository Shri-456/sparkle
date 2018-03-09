#include "stdio.h"
#include<string.h>
void main()
{
char s[10],s1[10],temp;
int i,j;
printf("enter a string");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
  s1[i]=s[i];
}
i=0;
j=strlen(s)-1;
while(i<j)
{
  temp=s[i];
  s[i]=s[j];
  s[j]=temp;
  i++;
  j--;
}
printf("%s",s);
for(i=0;s[i]!='\0';i++)
{
  if(s1[i]==s[i])
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}

}
