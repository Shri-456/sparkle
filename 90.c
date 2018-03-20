#include "stdio.h"
void main()
{
  char s[10];
  int i;
  printf("enter a string");
  scanf("%s",s);
  for(i=0;i<=10;i++)
  {
    if((s[i]=='0')||(s[i]=='1')||(s[i]=='2')||(s[i]=='3')||(s[i]=='4')||(s[i]=='5')||(s[i]=='6')||(s[i]=='7')||(s[i]=='8')||(s[i]=='9'))
    {
      printf("%c",s[i]);
    } 
  }
}
