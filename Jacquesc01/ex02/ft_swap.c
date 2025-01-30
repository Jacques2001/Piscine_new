#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int c = *a;
  *a = *b;
  *b = c;
  
}
/*
int main()
{
  int a;
  a  = 30;
  int b;
  b = 60;
  ft_swap(&a, &b);
  printf("%d, %d", a, b);
  return 0;
}*/
