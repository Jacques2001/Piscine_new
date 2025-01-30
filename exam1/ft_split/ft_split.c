#include <stdio.h>
#include <stdlib.h>

void print_split(char **str)
{
  if(str == NULL)
    printf("La fonction est cassee\n");
  int i;
  i = 0;
  while(str[i] != NULL)
  {
    printf("%s\n", str[i]);
    i++;
  }
}

int is_sep(char c)
{
  char charset[] = " \n\t!?,.";
  int i;
  i = 0;
  while(charset[i])
  {
    if(c == charset[i])
    {
      return 1;
    }
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
  if(i == 0 && is_sep(str[i]) == 1)
  {
    while(is_sep(str[i]) == 1)
      i++;
  }
  while(str[i])
  {
    if((is_sep(str[i]) == 1 && is_sep(str[i - 1]) == 0) || (str[i + 1] == '\0' && is_sep(str[i]) == 0))
      count++;
    i++;
  }
  return count;
}

int count_letter(int x, char *str)
{
  int i;
  i = 0;
  while(str[x] && is_sep(str[x]) == 0)
  {
    x++;
    i++;
  }
//  printf("letter = %d\n", i);
  return i;
}

void fill_split(char **split, char *str)
{
  int i;
  int x;
  int y;
  i = 0;
  x = 0;
  y = 0;
  while(split[i] != NULL)
  {
    while(str[y])
    {
      if(is_sep(str[y]) == 0)
      {
        while(is_sep(str[y]) == 0 && str[y])
          split[i][x++] = str[y++];
        split[i][x] = '\0';
        x = 0;
        i++;
      }
      if(str[y] != '\0')
        y++;
    }
  split[i] = NULL;
  }
}

char **ft_split(char *str)
{
  int i;
  int y;
  char **split;
  i = 0;
  y = 0;
  split = malloc((count_word(str) + 1) * sizeof(char*));
  if(split == NULL)
    return NULL;
  if(y == 0 && is_sep(str[y]) == 0)
    split[i++] = malloc((count_letter(y, str) + 1) * sizeof(char));
  while(i < count_word(str))
  {
    if(is_sep(str[y]) == 0 && is_sep(str[y - 1]) == 1)
      split[i++] = malloc((count_letter(y, str) + 1) * sizeof(char));
    y++;
  }
  split[i] = NULL;
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
