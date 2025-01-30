#include <stdlib.h>
#include <stdio.h>

void print_split(char **split)
{
  int i;
  i = 0;
  while(split[i] != NULL)
  {
    printf("%s\n", split[i]);
    i++;
  }
}

int is_sep(char c)
{
  char charset[] = "!,?. \t\n";
  int x;
  x = 0;
  while(charset[x])
  { 
    if(c == charset[x])
      return 1;
    x++;
  }
  return 0;
}

int count_word(char *str)
{
  int i;
  int count;
  i = 0;
  count = 0;
  while(str[i])
  {
    if((is_sep(str[i]) == 0 && is_sep(str[i + 1]) == 1) || str[i + 1] == '\0' && is_sep(str[i]) == 0)
      count++;
    i++;
  }
  return count;
}

int count_letter(char *str, int y)
{
  int i;
  i = 0;
  while(is_sep(str[y]) == 0 && str[y])
  {
    y++;
    i++;
  }
  //printf("%d\n", i);
  return i;
}

void fill_split(char **split, char *str)
{
  int i;
  int y;
  int x;
  i = 0;
  y = 0;
  x = 0;
  if(y == 0 && is_sep(str[y]) == 0)
  {
    while(is_sep(str[y]) == 0)
    {
      split[i][x] = str[y];
      x++;
      y++;
    }
    split[i][x] = '\0';
    x = 0;
    i++;
  }
  while(split[i] != NULL)
  {
    while(str[y])
    {
      if(is_sep(str[y]) == 0 && is_sep(str[y - 1]) == 1)
      {
        while(is_sep(str[y]) == 0 && str[y])
        {
          split[i][x] = str[y];
          y++;
          x++;
        }
        split[i][x] = '\0';
        x = 0;
        i++;
      }
      y++;
    }
    split[i] = NULL;
  }
}

char **ft_split(char *str)
{
  int i;
  char **split;
  int y;
  i = 0;
  y = 0;
  split = malloc((count_word(str) + 1) * sizeof(char*));
  if(split == NULL)
    return NULL;
  if(y == 0 && is_sep(str[y]) == 0 && str[y] != '\0')
  {
    split[i] = malloc((count_letter(str, y) + 1) * sizeof(char));
    i++;
  }
  while(str[y])
  {
    if(is_sep(str[y]) == 0 && is_sep(str[y - 1]) == 1)
    {
      split[i] = malloc((count_letter(str, y) + 1) * sizeof(char));
      i++;
    }
    y++;
  }
  split[(count_word(str))] = NULL;
  y = 0;
  if(str[y] != '\0')
    fill_split(split, str);
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
