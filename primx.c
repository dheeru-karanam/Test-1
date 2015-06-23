#include "stdio.h"
int main()
{
  int n,i,j;
  scanf("%d",&n);
  n--;
  int a[n];
  for(i=0;i<n;i++)
  {
    a[i]=i+2;
  }
  for(i=2;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[j]==i)
      {
	j++;
      }
      if(a[j]%i==0)
      {
	a[j]=0;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    if(a[i]==0)
    {
      continue;
    }
    else
    {
      printf("%d ",a[i]);
    }
  }
      
  return 0;
}
  
  