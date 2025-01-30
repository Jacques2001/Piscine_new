#include <unistd.h>

int ft_strlen(char *str)
{
  int i;
  i = 0;
  while(str[i])
    i++;
  return i;
}

void last_word(char *str)
{
  int i;
  i = ft_strlen(str) - 1;
  if(str[i] == ' ' || str[i] == '\t')
  {
    while(str[i] == ' ' || str[i] == '\t')// pourquoi ca fonctionne avec || et pas avec && ?
      i--;
  }
  while(str[i] != ' ' && str[i] != '\t' && i != 0)
  {
    i--;
  } 
  if(str[i] == ' ')
    i++;
  while(str[i] && str[i] != ' ' && str[i] != '\t')
  {
    write(1, &str[i], 1);
    i++;
  }

}

int main(int ac, char **av)
{
  int i;
  i = 1;
  if(ac == 2)
  {
    while(i < ac)
    {
      last_word(av[i]);
      i++;
    }
  }
  write(1, "\n", 1);
  return 0;
}
