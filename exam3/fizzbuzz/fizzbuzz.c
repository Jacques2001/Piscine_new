#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

int main()
{
  char nb;
  char dix;
  nb = '1';
  dix = '1';
  while(nb <= '9')
  {
    if((nb + 48) % 3 == 0)
    {
      write(1, "fizz", 4);
      ft_putchar('\n');
      nb++;
    }
    else if(nb == '5')
    {
      write(1, "buzz", 4);
      ft_putchar('\n');
      nb++;
    }
    else
    {
      ft_putchar(nb);
      ft_putchar('\n');
      nb++;
    }
  }
  nb = '0';
  while(dix <= '9')
  {
    while(nb <= '9')
    {
      if(((dix + 48) * 10 + (nb + 48)) % 3 == 0 && (nb == '5' || nb == '0'))
      {
        write(1, "fizzbuzz\n", 9);
        nb++;
      }      
      else if(((dix + 48) * 10 + (nb + 48)) % 3 == 0)
      {
        write(1, "fizz", 4);
        ft_putchar('\n');
        nb++;
      }
      else if(nb == '5' || nb == '0')
      {
        write(1, "buzz", 4);
        ft_putchar('\n');
        nb++;
      }
      else
      {
        ft_putchar(dix);
        ft_putchar(nb);
        ft_putchar('\n');
        nb++;
      }
    }
    nb = '0';
    dix++;
  }
  write(1, "buzz\n", 5);
  return 0;
}
