#include <string.h>
#include <stdio.h>

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

int main()
{
  char str[] = "Je vais bien";
  int resultat = ft_strlen(str);
  int result = strlen(str);
  printf("%d\n", resultat);
  printf("%d\n", result);
  return 0;
}
