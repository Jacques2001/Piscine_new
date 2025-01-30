#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);

}

void ft_print_comb(void)
{
  char c;
  char a;
  char b;
  a = '0';
  b = '1';
  c = '2';
  while(a <= '7')
  {
    b = a + 1;
    while(b <= '8')
    {
      c = b + 1;
      while(c <= '9')
      { 
      ft_putchar(a);//0
      ft_putchar(b);//1
      ft_putchar(c);//9
      if(a == '7' && b == '8' && c == '9')
      {
        ft_putchar('\n');
      }
      else
      {
        ft_putchar(',');
        ft_putchar(' ');
      }
      c++;
      
      }
    b++; 
    } 
  a++;
  }
}
int main()
{
  ft_print_comb();
  return 0;
}
