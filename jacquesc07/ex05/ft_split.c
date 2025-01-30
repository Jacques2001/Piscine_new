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

int ischarset(char c, char *charset)
{
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


int count_letter(int i, char *str, char *charset)
{
  int x;
  x = i;  
  while(str[i] != '\0')
  {
    if(ischarset(str[i], charset) == 0 && ischarset(str[i + 1], charset) == 1)
    {
//      printf("letter ; %d\n",  i - x + 1);
      return i - x + 1;
    }
    i++;
  }
//  printf("letter / %d\n", i - x);
  return i - x;  
}


int count_word(char *str, char *charset)
{
  int i;
  int total;
  i = 0;
  total = 0;
  while(str[i])
  {
    if(i == 0 && ischarset(str[i], charset) == 0)
    {
      total++;
    }
    if(ischarset(str[i], charset) == 1 && ischarset(str[i + 1], charset) == 0 && str[i + 1] != '\0')
    {
      total++;
    } 
    i++;
  } 
  return total; 
}


char **ft_split(char *str, char *charset)
{
  int i;
  int x;
  int y;
  char **split;
  i = 0;
  x = 0;
  y = 0;
  split = malloc((count_word(str, charset) + 1) * sizeof(char *)); // important de faire + 1 !!
  if(split == NULL)
  {
    return NULL;
  }
  if(ischarset(str[y], charset) == 0 && y == 0 && str[y] != '\0')
    {
      split[i] = malloc((count_letter(y, str, charset) + 1) * sizeof(char));
      i++;         
    }
  while(i != count_word(str, charset))
  {
    if(ischarset(str[y], charset) == 0 && ischarset(str[y - 1], charset) == 1)
    {
      split[i] = malloc((count_letter(y, str, charset) + 1) * sizeof(char));
      i++;
    }
    y++;
  }
  split[count_word(str, charset)] = NULL;


  i = 0;
  y = 0;
  while(split[i] != NULL)
  {
    while(str[y] != '\0' || (str[y] != '\0' && str[y + 1] != '\0'))
    {
      if(ischarset(str[y], charset) == 0)
      {
        split[i][x] = str[y];
        x++;
      }
      y++;
      if(ischarset(str[y], charset) == 1 && ischarset(str[y - 1], charset) == 0 || str[y] == '\0')
      {
        if(str[y] != '\0')
        {
          split[i][x] = '\0';
        } 
        if(split[i] != NULL)
        {
          i++;
          x = 0;
        }
      }
    }
   split[i] = NULL;
  } 
  return split;
}


int main()
{
  char **result;
  char str[] = "  ,Hello,!!,World   !This  is  a,test,,string.";
  char *array[] = {
   ",Hello",
  "Hello....................",
  "................hello..............",
  "1.1.1.1.1.1.1..1.1..1.1.1.1..1.1..1.1.1.2",
  "...................................!,,,,,,,,,,,",
  "",
  NULL
  };
  char charset[] = ", !.";
  result = ft_split(str, charset);
  print_split(result);
  for(int i=0; array[i] != NULL;i++ )
  {
    printf("============= TEST %d =================\n",i);
    printf("string: [%s]\n",array[i]);
    printf("charset: [%s]\n", charset);
    
    int j = 0;
    char **tab;
    tab = ft_split(array[i],charset);
    printf("\nft_split:\n");
    for(int k=0; tab[k] != NULL ;k++)
    {
     printf("tab[%d] = {%s}\n",k, tab[k]);
    }


  }
  free(result);


//  printf("is word ; %d\n", count_word(str, charset));
  return 0;
}
