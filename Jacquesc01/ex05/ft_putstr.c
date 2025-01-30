#include <stdio.h>
#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
  int i;
  i = 0;
  while(str[i] != '\0')
  {
    write(1,&str[i], 1);
    i++;
  }
}
int main()
{
  char chaine[] = "Hello World!";
  ft_putstr(chaine);
  return 0;
}
