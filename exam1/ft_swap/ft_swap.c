#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int j;
  j = *a  
  *a = *b;
  *b = j;
}

int main()
{
  int a;
  int b;
  a = 42;
  b = 24;
  ft_swap(&a, &b);
  printf("%d, %d", a, b);
  return 0;
}
