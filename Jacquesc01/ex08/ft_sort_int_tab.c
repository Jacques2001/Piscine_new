#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int c = *a;
  *a = *b;
  *b = c; 
}

void ft_sort_int_tab(int *tab, int size)// bubble sort
{
  int i;
  int j;

  i = 0;
  j = size - 1;
  while(i < j)
  {
    while(i < j)
    {  
      if(tab[i] > tab[i + 1])
      {
        ft_swap(&tab[i], &tab[i + 1]);
      }
      else
      {
        i++;
      }
    }
  	j--;
    i = 0;
  }
}
/*
void print_tab(int *tab, int size)
{
  int i = 0;
  while(i < size)
  {
    printf("tab[%d] = %d\n", i, tab[i]);
    i++;
  }

}
int main()
{
  int tab[] = {-45, 46, -23, 2020, 19, 50, 2021, -100, 74, -62, 89, 2023, 54};
  ft_sort_int_tab(tab, 13);
  print_tab(tab, 13);
}
