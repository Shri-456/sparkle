#include "stdio.h"
#include<string.h>
void main()
{
  char s[19];
  int m,i=0,l;
  printf("enter a word");
  scanf("%s",s);
  l=strlen(s);
  m=l/2;
  while(s[i]!='\0')
  {
    
    if(i==m)
    {
    printf("*");
    i++;
  }
  else
{
    printf("%c",s[i]);
    i++;
}
}
}
