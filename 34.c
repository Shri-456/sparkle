#include "stdio.h"
void main()
{
  char ch[50];
  int count=0,i;
  printf("enter a paragraph");
  scanf("%s",ch);
  for(i=0;ch[i]!='\0';i++)
  {
  if(ch[i]=='.')
  {
    count++;
  }
  }
printf("%d",count);
}
