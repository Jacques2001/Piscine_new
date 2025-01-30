#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
  int i;
  i = 0;
  while(str[i])
    i++;
  return i;
}

int len(char **strs)
{
  int i;
  int x;
  int count;
  count = 0;
  i = 0;
  x = 0;
  while(strs[i] != NULL)
  {
    while(strs[i][x] != '\0')
    {
      x++;
      count++;
    }
    x = 0;
    i++;
  }
  return count;
}

int count(char **strs)
{
  int i;
  i = 0;
  while(strs[i] != NULL)
    i++;
  return i;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
  int i;
  int x;
  int y;
  int z;
  char *result;
  x = 0;
  i = 0;
  y = 0;
  z = 0;
  result = malloc(len(strs) + 1  + (ft_strlen(sep) * (size - 1)) * sizeof(char));
  printf("%d\n", (len(strs) + 1  + (ft_strlen(sep) * (size - 1))));
  if(result == NULL)
    return NULL;
  if(size == 0)
    return result;
  while(strs[i] != NULL)
  { 
    while(strs[i][x] != '\0')
      result[y++] = strs[i][x++];
    if(i < size - 1)
    {
      while(sep[z])
        result[y++] = sep[z++];
    }
    z = 0;
    x = 0;
    i++;
  }
  result[y] = '\0';
  return result;
}

int main()
{
  char *str[] = {"Hello", "World","Jacques", "is", "astonishing",  NULL};
  char sep[] = "! ";
  printf("%s\n",ft_strjoin(count(str), str, sep));
  //printf("size is %d\nlen is %d\n", count(str), len(str));
  return 0;
}
