#include <stdio.h>
#include <stdlib.h>

int count_nb(int nb)
{
  int i;
  i = 0;
  if(nb == -2147483648)
    return 11;
  if(nb < 0)
  {
    nb *= -1;
    i++;
  }
  while(nb > 0)
  {
    nb = nb / 10;
    i++;
  }
  return i;
}

void fill_str(int nbr, char *itoa, int *i)
{
  if(nbr == -2147483648)
  {
    itoa[(*i)] = '-';
    (*i)++;
    itoa[(*i)] = '2';
    (*i)++;
    nbr = 147483648;
  } 
  if(nbr < 0)
  {
    nbr *= -1;
    itoa[(*i)] = '-';
    (*i)++;
  }
  if(nbr > 10)
  {
    fill_str(nbr / 10, itoa, i);
    fill_str(nbr % 10, itoa, i);
  }
  else
  {
    itoa[(*i)] = nbr + '0';
    (*i)++; 
  } 
}

char *ft_itoa(int nbr)
{
  char *itoa;
  int i;
  i = 0;
  itoa = malloc((count_nb(nbr) + 1) * sizeof(char));
  if(itoa == NULL)
    return NULL;
  fill_str(nbr, itoa, &i);
  itoa[i] = '\0';
  return itoa;
}

int main()
{
  int nb;
  nb =  -2147483647;
//  printf("le total de chiffre est ; %d\n", count_nb(nb));
  printf("%s\n", ft_itoa(nb));
  return 0;
}
