#include <stdlib.h>
#include <stdio.h>

int is_sep(char c)
{
  char *charset = " \t\n!.?,\0";
  int i;
  i = 0;
  while(charset[i])
  {
    if(c == charset[i])
      return 1;
    i++;
  }
  return 0;
}

int count_word(char *str)
{
  int i;
  int count;
  i = 0;
  count = 0;
  if(i == 0 && is_sep(str[i]) == 0)
    count++;
  while(str[i])
  {
    if(is_sep(str[i]) == 1 && is_sep(str[i + 1]) == 0 && str[i + 1] != '\0')
      count++;
    i++;
  }
  return count;
}

int count_letter(char *str, int y)
{
  int i;
  i = 0;
  while(is_sep(str[y]) == 0 && str[y] != '\0')
  {
    y++;
    i++;
  }
  return i;
}

void fill_split(char *str, char **split)
{
  int i;
  int x;
  int y;
  i = 0;
  x = 0;
  y = 0;
  if(y == 0 && is_sep(str[y]) == 1)
    y++;
  while(str[y])
  {
    if(is_sep(str[y]) == 0)
      split[i][x++] = str[y];
    if((is_sep(str[y]) == 1 && is_sep(str[y - 1]) == 0) || str[y] == '\0')
    {
      split[i++][x] = '\0';
      x = 0; // a ne surtout pas oublier
    }
    y++;
  }
}

char **ft_split(char *str)
{
  int i;
  int y;
  int x;
  char **split;
  i = 0;
  y = 0;
  x = 0;
  if(y == 0 && str[y] == '\0')
    return split; // dans le test 5 il faut directement retourner split au lieu de de return NULL
  split = malloc((count_word(str) + 1) * sizeof(char*));
  if(split == NULL)
    return NULL;
  if(y == 0 && is_sep(str[y]) == 0)
  {
    split[i] = malloc((count_letter(str, y) + 1) * sizeof(char));
    if(split[i] == NULL)
      return NULL;
    i++;
//    printf("%d\n",count_letter(str, y));
  }
  while(str[y])
  {
    if(is_sep(str[y]) == 0 && is_sep(str[y - 1]) == 1) 
    {
      split[i] = malloc((count_letter(str, y) + 1) * sizeof(char));
      if(split[i] == NULL)
        return NULL;
      i++;
//      printf("%d\n", count_letter(str, y));
    }
    y++;
  }
  split[i] = NULL;
  fill_split(str, split); 
  return split;
}

int main()
{
  char *array[] = {
  ",Hello",
  "Hello....................",
  "................hello..............",
  "1.1.1.1.1.1.1..1.1..1.1.1.1..1.1..1.1.1.2",
  "...................................!,,,,,,,,,,,",
  "",
  "Hello",
  "Hello, World ! 42 ?",
  NULL
  };
  for(int i = 0; array[i] != NULL;i++ )
  {
    printf("============= TEST %d =================\n",i);
    printf("string: [%s]\n",array[i]);
    
    char **tab;
    tab = ft_split(array[i]);
    printf("\nft_split:\n");
    for(int k=0; tab[k] != NULL ;k++)
    {
     printf("tab[%d] = {%s}\n",k, tab[k]);
    }
  }
  return 0;
}

