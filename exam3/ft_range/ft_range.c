#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
  int i;
  i = 0;
  int *range;
  range = malloc((end - start + 1) * sizeof(int));
  if(range == NULL)
    return NULL;
  while(start <= end)
  {
    range[i] = start;
    start++;
    i++;
  }
  return range;
}

void print_range(int *range, int min, int max)
{
  int i;
  i = 0;
  while(min <= max)
  {
    printf("%d\n", range[i]);
    i++;
    min++;
  } 
}

int main()
{
  int min;
  int max;
  min = -3;
  max = 0;
  print_range(ft_range(min, max), min, max);
  return 0;
}
