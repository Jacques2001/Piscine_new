#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
  int i;
  i = 0;
  int j;
  int tmp;
  j = size - 1;
  while(i < j)
  {
    tmp = tab[i];
    tab[i] = tab[j];
    tab[j] = tmp;
    i++;
    j--;
  }

}

void print_tab(int *tab, int size)
{
  int i = 0;
  while(i < size)
  {
    printf("tab[%d] == %d\n", i, tab[i]);
    i++;
  }

}


int main()
{
  int tab[] = {35, 87, 54, 12};
  ft_rev_int_tab(tab, 4); 
  print_tab(tab, 4);
  return 0;
}  
