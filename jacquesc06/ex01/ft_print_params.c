#include <unistd.h>
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

int main(int argc, char *argv[])
{
  int i;
  i = 1;
  while(i <= argc - 1) 
  {
    ft_putstr(argv[i]);
    write(1, "\n", 1);
    i++;
  }
  return 0;
}
