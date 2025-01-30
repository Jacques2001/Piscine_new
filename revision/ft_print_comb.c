#include <unistd.h>

void ft_print_comb(void)
{
  int a;
  int b;
  int c;
  a = '0';
  b = '1';
  c = '2';
  while(a <= '7')
  {
    while(b <= '8')
    {
      while(c <= '9')
      {
        write(1 ,&a, 1);
        write(1, &b, 1);
        write(1, &c, 1);
        if( a == '7' && b == '8' && c = '9')
        {
          write(1, '\n', 1);
        }
        else
        {
        write(1, ", ", 1);
        }
        c++;
      }
    b++;
    c = b + 1;
    }
    b = a + 1;
    a++;
   } 
}

int main()
{
  ft_print_comb();
  return 0;
} 
