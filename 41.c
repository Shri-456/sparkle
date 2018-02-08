#include "stdio.h"
void main()
{
  char s[10];
  int n,i;
  printf("enter a word");
  scanf("%s",&s);
  printf("enter a limit");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\n%s",s);
  }
}
  
