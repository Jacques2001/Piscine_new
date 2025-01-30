#include <stdio.h>
#include <unistd.h>

void rotone(char *str)
{
  int i;
  i = 0;
  while(str[i])
  {
    if((str[i] >= 65 && str[i] < 90) || (str[i] >= 97 && str[i] < 122))
    {
      str[i] += 1;
    }
    else if(str[i] == 90 || str[i] == 122)
    {
      str[i] -= 25;
    }
    write(1, &str[i], 1);
    i++;
  }
}

int main(int ac, char **av)
{
  int i;
  i = 1;
  if(ac == 2)
  {
    while(i < ac)
    {
      rotone(av[i]);
      i++;
    }
  }
  write(1, "\n", 1);
  return 0;
}
