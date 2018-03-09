#include "stdio.h"
char s[30];
int i,c=0;
printf("enter a word");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)

{
  if((s[i]=='a')&&(s[i]=='e')&&(s[i]=='i')&&(s[i]=='o')&&(s[i]=='u'))
  {
    c++;
  }
}
if(c>0)
{
printf("yes");
}
else
{
printf("no");
}
}
