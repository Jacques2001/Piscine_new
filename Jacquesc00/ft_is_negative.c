#include <unistd.h>

void ft_is_negative(int n)
{
  if(n >= 0 && n <= 10)
  {
    write(1, "A", 1);
  }
  else if(n > 10 && n <= 20)
  {
    write(1, "B", 1);
  }
  else if(n > 20 && n <= 100)
  {
    write(1, "C", 1);
  }
  else
  {
    write(1, "D", 1);
  }
}

int main()
{
  ft_is_negative(20);
  return 0;
}
