#include <stdio.h>
#include <stdlib.h>

void print_range(int *range, int min, int max)
{
  for(int i = 0; i <= max - min; i++)
    printf("%d\n", range[i]);
}

int *ft_range(int start, int end)
{
  int i;
  int *result;
  i = 0;
  result = malloc((end - start + 1) * sizeof(int));
  while(start <= end)
  {
    result[i] = start;
    i++;
    start++;
  }
  return result;
}

int main()
{
  int min;
  int max;
  min = -1;
  max = 2;
  print_range(ft_range(min, max), min, max);
  return 0;
}
