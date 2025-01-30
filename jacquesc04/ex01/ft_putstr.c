#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
  int i;
  i = 0;
  while(str[i] != '\0')
  {
    write(1, &str[i], 1);
    i++;
  }
}

int main()
{
  char str[] = "Je teste mon exo";
  ft_putstr(str);
  return 0;
}
