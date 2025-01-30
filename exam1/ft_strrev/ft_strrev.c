#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
  int i;
  i = 0;
  while(str[i])
    i++;
  return i;
}

char *ft_strrev(char *str)
{
  int i;
  int x;
  char tmp;
  i = 0;
  x = ft_strlen(str) - 1;
  while(i < x)
  {
    tmp = str[i];
    str[i] = str[x];
    str[x] = tmp;
    i++;
    x--;
  }
  return str;
}

int main()
{
  char str[] = "Hello";
  printf("%s\n", ft_strrev(str));
  return 0;
}
