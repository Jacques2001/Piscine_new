#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2)
{
  int i;
  i = 0;
  while(s1[i] != '\0')
  {
    if(s1[i] == s2[i])
    {
      i++;
    }
    if(s1[i] != s2[i])
    {
      return s1[i] - s2[i];
    }
  }
  return 0;
}

int main()
{
  char s1[] = "Hellob";
  char s2[] = "Helloa";
  int res1 = ft_strcmp(s1, s2);
  printf("res1;%d\n", res1);
  int res2 = strcmp(s1, s2);
  printf("res2:%d\n", res2);
   return 0;
}
