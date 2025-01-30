#include <unistd.h>

void rot_13(char *str)
{
  int i;
  i = 0;
  while(str[i])
  {
    if((str[i] >= 65 && str[i] < 78) || (str[i] >= 97 && str[i] < 110)) 
      str[i] += 13;
    else if((str[i] >= 78 && str[i] < 91) || (str[i] >= 110 && str[i] < 123))
      str[i] -= 13;
    write(1, &str[i], 1);
    i++;
  }
}

int main(int ac, char **av)
{
  if(ac == 2)
    rot_13(av[1]);
  write(1, "\n", 1);
  return 0;
}
