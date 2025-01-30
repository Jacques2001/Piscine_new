#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
  int i;
  i = 0;
  (*range) = malloc((max - min) * sizeof(int));
  if(*range == NULL)
    return -1;
  if(min >= max)
  {
    (*range) = NULL;
    return 0;
  }
  while(min < max)
    (*range)[i++] = min++;
  return i;
}

int main()
{
  int min;
  int max;
  int *r;
  min = 1;
  max = 4;
  printf("%d\n",ft_ultimate_range(&r, min, max));
  return 0;
}
