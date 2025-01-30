#include <unistd.h>

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
  (void)argc;
  write(1, argv[0], ft_strlen(*argv));
  write(1, "\n", 1);
  ft_putstr(*argv);
  write(1, "\n", 1);
  return 0;
}
