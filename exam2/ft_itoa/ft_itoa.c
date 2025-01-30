#include <stdlib.h>
#include <stdio.h>

int count_nbr(int nbr)
{
  int i;
  i = 0;
  if(nbr < 0)
    i++;
  while(nbr != 0)
  {
    nbr = nbr / 10;
    i++;
  }
  return i;
}

void fill_str(char *str, int nbr, int *i)
{
  if(nbr == -2147483648)
  {
    str[*i] = '-';
    (*i)++;
    str[*i] = '2';
    (*i)++;
    nbr = 147483648;
  }
  
  if(nbr < 0)
  {
    str[*i] = '-';
    (*i)++;
    nbr *= -1;
  }

  if(nbr >= 10)
  {
    fill_str(str, nbr / 10, i);
    fill_str(str, nbr % 10, i);
  }

  else
  {
    str[*i] = nbr + '0';
    (*i)++;
  }
}

char *ft_itoa(int nbr)
{
  int i;
  char *str;
  i = 0;
  str = malloc((count_nbr(nbr) + 1 )* sizeof(char));
  fill_str(str, nbr, &i);
  str[i] = '\0';
  return str;
}

int main()
{
  int nbr;
  nbr = -2147483648;
//  printf("%d\n", count_nbr(nbr));
  printf("%s\n", ft_itoa(nbr));
  return 0;
}
