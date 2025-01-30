#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
  int *result;
  int i;
  i = 0;
  result = malloc((end - start + 1) * sizeof(int));
  while(start <= end)
  {
    result[i] = start;
    start++;
    i++;
  }
  return result;
}

int main()
{
  int min;
  int max;
  int i;
  int *result;
  i = 0;
  min = -3;
  max = 0;
  result = ft_range(min, max);
  while(i <= max - min)
  {
    printf("%d\n", result[i]);
    i++;
  }
  return 0;
}
