#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
  int i;
  i = 0;
  while(s2[i])
  {
    s1[i] = s2[i];
    i++;
  }
  s1[i] = '\0';
  return s1;  
}


int main()
{ 
  char s2[] = "HELLO WORLD IM JACQUES";
  char s1[100] = {0};
  ft_strcpy(s1, s2);
  printf("%s\n%s\n", s1, s2);
  return 0;
}
