#include <unistd.h>
#include <stdio.h>

void inter(char *s1, char *s2)
{
  int tab[256] = {0};
  int i;
  i = 0;
  while(s2[i])
  {
    if(tab[(int)s2[i]] == 0)
      tab[(int)s2[i]] = 1;
    i++;
  }
  i = 0;
  while(s1[i])
  {
    if(tab[(int)s1[i]] == 1)
    {
      write(1, &s1[i], 1);
      tab[(int)s1[i]] = 2;
    }
    i++;
  }
}

int main (int ac, char **av)
{
  if (ac != 3)
    write(1,"\n",1);
  inter(av[1],av[2]);
  return 0;
}
