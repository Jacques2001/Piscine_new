#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int j;
  j = *a;
  *a = *b;
  *b = j;
}

int main()
{
  int a;
  int b;
  a = 19;
  b = 24;
  ft_swap(&a, &b);
  printf("%d\n%d\n", a, b);
  return 0;
}
