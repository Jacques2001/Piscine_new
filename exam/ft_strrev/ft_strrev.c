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

char *ft_strrev(char *str)
{
  int i;
  char tmp;
  int j;
  i = 0;
  j = ft_strlen(str) - 1;
  while(i < j)
  {
    tmp = str[i];
    str[i] = str[j];
    str[j] = tmp;
    i++;
    j--;
  }
  return str;
}

int main()
{
  char str[] = "Hello Jacques";
  ft_strrev(str);
  printf("%s", str);
  return 0;
}
