#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
  int i;
  i = 0;
  while(str[i] != '\0')
    i++;
  return i;
}

int ft_lengthall(char **strs, char *sep)
{
  int i;
  int x;
  int y;
  int total1;
  int total2;
  i = 0;
  total1 = 0;
  total2 = 0;
  while(strs[i] != NULL) 
  {
    x = 0;
    y = 0;
    while(strs[i][x] != '\0')
    {
//			printf("strs[%d][%d]: %c\n",i, x, strs[i][x]);
      x++;
    }    
    if(strs[i][x] == '\0')
    {
      while(sep[y] != '\0')
      {
//        printf("sep[%d]: %c\n", y, sep[y]);
        y++;
      }
    }
    total2 += y;
    total1 += x;
    i++;
  }
  total2 -= ft_strlen(sep);
  return total1 + total2;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
  char *resultat;
  int i;
  int x;
  int y;
  int z;
  i = 0;
  z = 0;
  if(size == 0)
    return malloc(size * sizeof(char));
  resultat = malloc(size * sizeof(char));
  if(resultat == NULL)
    return 0;
    while(strs[i] != NULL) 
  {
    x = 0;
    y = 0;
    while(strs[i][x] != '\0')
    {
      resultat[z] = strs[i][x];
      x++;
      z++;
    }
    if(strs[i + 1] == NULL)
      return resultat;     
    while(sep[y] != '\0')
    {
      resultat[z] = sep[y];
      y++;
      z++;
    }
    i++;
  }
  return resultat;
}


int main()
{
  int size;
  char *strs[] = {"Hello", "World", "42", NULL};
  char sep[] = ",      ";
  char *result;
  size = ft_lengthall(strs, sep);
  result = ft_strjoin(size, strs, sep);
  printf("%s", result);
  return 0;
}
