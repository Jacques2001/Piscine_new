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
/*
int main()
{
  char chaine[] = "Salut Monde!";

  printf("%d", ft_strlen(chaine));
	return 0;
}
