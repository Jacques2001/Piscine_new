#include <unistd.h>
#include <stdio.h>

void ft_alpha(char *str)
{
  int i;
  i = 0;
  while(str[i])
  {
//    printf("avant = %c %d\n", str[i], str[i]);
    if((str[i] > 77 && str[i] < 91) || (str[i] >= 110 && str[i] <= 122))
    {
      str[i] -= 13;
    } 
    else if((str[i] >= 65 && str[i] <= 77) || (str[i] >= 97 && str[i] < 110))
    {
      str[i] += 13;
    }
    write(1, &str[i], 1);
//    printf("apres = %c %d\n======================\n", str[i], str[i]);
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
      ft_alpha(av[i]);
      i++;
    }
  }
  write(1, "\n", 1);
  return 0; 
}
