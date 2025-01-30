#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
  int *src;
  int i;
  i = 0;
  if(min >= max)
  {
    return NULL;
  }
  src = malloc((max - min) * sizeof(int));
  if(src == NULL)
  {
    return NULL;
  }
  while(min < max)
  {
    src[i] = min;
    i++;
    min++;
  }
  return src;  
}

int main()
{
  int i;
  int min;
  int max;
  int *result;
  i = 0;
  min = 1;
  max = 10;
  result = ft_range(min, max);
  while(i < max - min)
  {
    printf("%d, ", result[i]);
    i++;
  }
  return 0;
}
