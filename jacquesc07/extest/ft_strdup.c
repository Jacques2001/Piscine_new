#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
  int i;
  i = 0;
  char *string;
  if(src == NULL)
  {
    return 0;
  }
  string = malloc(ft_strlen(src) * sizeof(char));
  if(string == NULL)
  {
    return 0;
  }
  while(src[i] != '\0')
  {
    string[i] = src[i];
    i++;
  }
  string[i] = '\0';
  return string;
}

int main()
{
  char *result;
  char src[] = "Hello";
  result = ft_strdup(src);
  printf("%s\n", result);
  printf("%s\n", strdup(src));
}
