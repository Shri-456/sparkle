#include "stdio.h"
void main()
{
  char str[100];
  int i,ct=0;
  printf("enter a line");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
  if((str[i]>='a'&&str[i]<='z')||(str[i]>='0'&&str[i]<='9'))
  {
   ct+=1;
  }
  }
  printf("%d",ct);
  
}
