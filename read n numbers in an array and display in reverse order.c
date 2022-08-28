#include <stdio.h>
int main()
{
  int n, c, d, a[100], b[100];

  printf("Enter the number of elements in array\n");
  scanf("%d", &n);

  printf("Enter array elements\n");

  for (int i = 0; i < n ; i++)
  {
    scanf("%d", &a[i]);

  }

  for ( int i = n - 1, d = 0;i >= 0;i--, d++)
  {
    b[d] = a[i];

  }

  for (int i = 0; i < n;i++)
   { 
       a[i] = b[i];
   }

  printf("The array after reversal:\n");

  for (int i = 0; i < n; i++)
  {
    printf("%d\n", a[i]);
  }
  return 0;
}

