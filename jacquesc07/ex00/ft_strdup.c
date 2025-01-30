#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
  int i;
  i = 0;
  while(str[i] != '\0')
  {
    i++;
  }
  return i;
}

char *ft_strdup(char *src)
{
  char *memoire;
  int i;
  i = 0;
  if(src == NULL)
  {
    return 0;
  }
  memoire = malloc((ft_strlen(src) + 1) * sizeof(char));
  if(memoire == NULL)
  {
    return 0;
  }
  while(src[i] != '\0')
  {
    memoire[i] = src[i];
    i++;    
  }
  memoire[i] = '\0';
  return memoire;
}

int main()
{
  char tab[] = "salut";
  printf("%s\n", ft_strdup(tab));
  printf("%s\n", strdup(tab));
  return 0;
}
