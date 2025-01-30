#include <unistd.h>

int wdmatch(char *s1, char *s2)
{

  int i;
  int x;
  i = 0;
  x = 0;

  while(s1[x])
  {
    while(s2[i])
    {
      if(s1[x] == s2[i])
        x++;
      i++;
    }
    if(s1[x] != '\0')
      return 0;  
  }

  x = 0;
  i = 0;
  while(s2[i])
  {
    if(s1[x] == s2[i]) 
    {
      write(1, &s2[i], 1);
      x++;
    }
    i++; 
  }
  return 0;
}

int main(int ac, char **av)
{
  if(ac == 3)
    wdmatch(av[1], av[2]);
  write(1, "\n", 1);
  return 0;
}
