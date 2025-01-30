#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
  int i;
  i = 0;
  if(min >= max)
  {
    *range = NULL;
    return 0;
  }
  *range = malloc((max - min) * sizeof(int));
  if(*range == NULL)
  {
    return -1;
  }
  while(min < max)
  {
    (*range)[i] = min;
    i++;
    min++;
  }
  return i;
}
int main()
{
  int min;
  int max;
  int *r;
  int result;
  min = 10;
  max = 20;
  result = ft_ultimate_range(&r, min, max);
  printf("%d\n", result);
  return 0;

  
