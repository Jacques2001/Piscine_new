#include <unistd.h>

void ft_print_number(void)
{
  int nbr;
  nbr = '0';
  while(nbr <= '9')
  {
    write(1, &nbr, 1);
    nbr++;
  }
}

int main()
{
  ft_print_number();
  return 0;
}
