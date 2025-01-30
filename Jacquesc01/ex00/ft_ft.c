#include <stdio.h>

void ft_ft(int *nbr)
{
  *nbr = 42; 
}

int main()
{
  int quoi;
  quoi = 456;
  ft_ft(&quoi);
  printf("%d", quoi); 
  return 0;
}
