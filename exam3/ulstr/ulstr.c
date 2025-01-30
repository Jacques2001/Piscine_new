#include <unistd.h>

void ulstr(char *str)
{
  int i;
  i = 0;
  while(str[i])
  {
    if(str[i] >= 65 && str[i] < 91)
      str[i] += 32;
    else if(str[i] >= 97 && str[i] < 123)
      str[i] -= 32;
    write(1, &str[i], 1);
    i++;
  }
}

int main(int ac, char **av)
{
  if(ac == 2)
    ulstr(av[1]);
  write(1, "\n", 1);
  return 0;
}
