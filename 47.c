#include "stdio.h"
void main()
{
  int n,a[50],i,j,temp;
  printf("enter a num");
  scanf("%d",&n);
  printf("enter the array of elements");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
    if(a[i]>a[j])
    {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
  }
    }
  }
  printf("%d %d",a[0],a[n-1]);
    
}
