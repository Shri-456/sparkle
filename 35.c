#include "stdio.h"
void main()
{
  char ch[50];
  int c=0,i;
  printf("enter a paragr");
  scanf("%s",ch);
  for(i=0;ch[i]!='\0';i++)
  {
   if(0<=ch[i]<=9)
    {
  c++;
  }
    }
printf("%d",c);
}
