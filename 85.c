#include "stdio.h"
void main()
{
  char s[10];
  int i;
  printf("enter a string");
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
    if(i%2==0)
    {
      printf("%c",s[i]);
    }
  }
  printf("\t");
 for(i=0;s[i]!='\0';i++)
  {
    if(i%2!=0)
    {
      printf("%c",s[i]);
    } 
}
}
