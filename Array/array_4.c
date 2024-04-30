//find Max & min value from array numbers
#include <stdio.h>
int main()
{
  int i,m,s;
  int a[5];
  printf("Enter 5 numbers of elements:\n");

  for (i=0; i<=4; ++i)
    {
    scanf("%d",&a[i]);
    }
    m=a[0];
    s=a[0];
  for (i=1; i<=4; ++i)
    {
    if (a[0]<a[i])
      {m=a[i];}

    if (a[0]>a[i])
      {s=a[i];}
  }
  printf("Maximum element = %d\n",m);
  printf("Minimum element = %d",s);

  return 0;
}
