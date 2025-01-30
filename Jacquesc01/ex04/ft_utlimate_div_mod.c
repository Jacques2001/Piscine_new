#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
  int c; 
  c = *a;

  int d = *b;
  *a = c / *b;
  *b = c % d;
}
/*
int main()
{
  int a = 15;
  int b = 4;

  ft_ultimate_div_mod(&a, &b);
  printf("%d, %d", a, b);
  return 0;
}*/
