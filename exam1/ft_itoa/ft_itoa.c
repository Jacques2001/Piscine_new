#include <stdio.h>
#include <stdlib.h>

int count_nbr(int nbr)
{
  int count;
  count = 0;
  if(nbr < 0)
  {
    count++;
  }
  if(nbr == 0)
  {
    return 1;
  }
  while(nbr != 0)
  {
    nbr = nbr / 10;
    count++;
  }
  return count;
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
    str[*i] = nbr + '0';// on utilise *i car cela permet de changer la valeur qui est passee, avec str[i] on modifie seulement la copie du i qui est passe dans ft_itoa et donc la valeur precedente est ecrasee
    (*i)++;
  }
}

char *ft_itoa(int nbr)
{
  int i;
  char *str;
  i = 0;
  str = malloc((count_nbr(nbr) + 1) * sizeof(char));
  if(str == NULL)
    return NULL;
  fill_str(str, nbr, &i);
  str[i] = '\0';
  return str;
}

int main()
{
  printf("%s\n", ft_itoa(-2147483648));
  return 0;
}
