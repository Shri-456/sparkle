#include "stdio.h"
void main()
{
  int n,a,b,c,i;
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    scanf("\n%d%d",&a,&b);
    c=a-b;
   printf("%d",c);
  }
}
