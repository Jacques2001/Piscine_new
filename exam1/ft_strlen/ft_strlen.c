#include <stdio.h>

int ft_strlen(char *str)
{
  int i;
  i = 0;
  while(str[i])
  {
    i++;
  }
  return i;
}

int main()
{
  char str[] = "Hello Jacques";
  printf("%d", ft_strlen(str));
  return 0;
}
