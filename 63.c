#include "stdio.h"
void main()
{
  char st[100];
  int i,f=0;
  printf("enter a word");
  scanf("%[^\n]s",st);
  for(i=0;s[i]!='\0';i++)
  {
    if(st[i]==' ')
    {
      f+=1;
    }
  }
  printf("%d",f);
  
}
