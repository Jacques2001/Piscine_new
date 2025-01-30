#include <unistd.h>

void print_nb(int nb)
{
  if(nb > 9)
    print_nb(nb / 10);
  write(1, &"0123456789"[nb % 10], 1);
}

int main()
{
  int n;
  n = 1;
  while(n <= 100)
  {
    if(n % 15 == 0)
      write(1, "fizzbuzz", 8);
    else if(n % 3 == 0)
      write(1, "fizz", 4);
    else if(n % 5 == 0)
      write(1, "buzz", 4);
    else
      print_nb(n);
    n++;
    write(1, "\n", 1);
  }
  return 0;
}
