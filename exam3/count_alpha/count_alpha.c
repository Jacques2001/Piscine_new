#include <stdio.h>
#include <unistd.h>

void count_alpha(char *str)
{
  int tab[256] = {0};
  int i;
  int unique;
  int printed;
  unique = 0;
  i = 0;
  printed = 0;
  while(str[i])
  {
    if(str[i] >= 65 && str[i] < 91)
      str[i] += 32;
    if(str[i] >= 'a' && str[i] <= 'z')
    {
      if(tab[(int)str[i]] == 0)
        unique++;
      tab[(int)str[i]]++;
    } 
    i++;
  }
  i = 0;
  while(str[i])
  {
    if(tab[(int)str[i]] > 0)
    {
      printf("%d%c", tab[(int)str[i]], str[i]);
      tab[(int)str[i]] = 0;
      printed++;
      if(printed < unique)
        printf(", ");
    }
    i++;
  }
}

int main(int ac, char **av)
{
  if(ac == 2)
    count_alpha(av[1]);
  printf("\n");
  return 0;
}
