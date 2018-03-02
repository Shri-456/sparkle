#include "stdio.h"
void main()
{
  char st[10];
  int i,f;
  printf("enter a word");
  scanf("%s",st);
  for(i=0;st[i]!='\0';i++)
  {
    if(st[i]=='1'||st[i]=='0')
    {
      f=1;
    }
    else
    {
      f=0;
    }
  }
  if(f==1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
