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

int main(int argc, char *argv[])
{
  (void)argc;
  int i;
  i = 1;
  while(i <= argc - 1) 
  {
    ft_putstr(argv[argc - 1]);
    write(1, "\n", 1);
    argc--;
  }
  return 0;
}
