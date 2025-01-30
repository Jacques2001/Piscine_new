#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str[] = "Hello World";
  char **split;
  int i;
  int x;
  int y;
  i = 0;
  x = 0;
  y = 0;
  split = malloc(2 * (sizeof(char *) + 1));
  split[0] = malloc(5 * (sizeof(char) + 1));
  split[1] = malloc(5 * (sizeof(char) + 1));
  split[2] = NULL;







  while(str[i] != ' ')
  {
    split[0][i] = str[i];
    i++;
  }
  split[0][i] = '\0';
  i++;

  while(str[i] != '\0')
  {
    split[1][y] = str[i];
    i++;
    y++;
  }
  split[1][y] = '\0';




  while(split[x] != NULL)
  {
    printf("%s\n", split[x]);
    x++;
  }
  return 0;
}











#include <stdlib.h>
#include <stdio.h>

void print_split(char **split)
{
  int i;
  i = 0;
  while(i <= 4)
  {
    printf("%s\n", split[i]);
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
  while(str[i])
  {
    if(ischarset(str[i], charset) == 0 && ischarset(str[i + 1], charset) == 1)
    {
//      printf("%d\n", i - x + 1);
      return i - x + 1;
    }
    i++;
  }
  return 0;  
}


int count_word(char *str, char *charset)
{
  int i;
  int total;
  i = 0;
  total = 0;
  while(str[i])
  {
    if(ischarset(str[i], charset) == 1 && ischarset(str[i + 1], charset) == 0)
    {
      total++;
//      printf("%c", str[i]);
    } 
    i++;
  } 
  if(str[i] == '\0' && ischarset(str[i - 1], charset) == 1)
  {
    total--;
  }
  return total + 1; 
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
  split = malloc((count_word(str, charset) + 1) * sizeof(char *));
  if(split == NULL)
  {
    return NULL;
  }
  if(ischarset(str[y], charset) == 0)
    {
      split[0] = malloc((count_letter(y, str, charset) + 1) * sizeof(char));
    }
  while(i <= count_word(str, charset))
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
    while(split[i][x] != '\0' || str[y])
    {
      if(ischarset(str[y], charset) == 0)
      {
        split[i][x] = str[y];
        x++;
      }
      y++;
      if(ischarset(str[y], charset) == 1 && ischarset(str[y - 1], charset) == 0)
      {
        split[i][x] = '\0';
      }
    }
    i++;
    x = 0;
  } 
  return split;
}


int main()
{
  char **result;
  char str[] = "Hello, Jacques ? It's me !";
//  char str[] = "!Hi, How are you ? Im Fine !!!!!!?";
  char charset[] = ", !?";
  result = ft_split(str, charset);
//  print_split(result);
//  printf("%d\n", count_word(str, charset));
//  printf("%d", count_letter(str, charset));
  return 0;
}#include <stdlib.h>
#include <stdio.h>

void print_split(char **split)
{
  int i;
  i = 0;
  while(i <= 4)
  {
    printf("%s\n", split[i]);
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
  while(str[i])
  {
    if(ischarset(str[i], charset) == 0 && ischarset(str[i + 1], charset) == 1)
    {
//      printf("%d\n", i - x + 1);
      return i - x + 1;
    }
    i++;
  }
  return 0;  
}


int count_word(char *str, char *charset)
{
  int i;
  int total;
  i = 0;
  total = 0;
  while(str[i])
  {
    if(ischarset(str[i], charset) == 1 && ischarset(str[i + 1], charset) == 0)
    {
      total++;
//      printf("%c", str[i]);
    } 
    i++;
  } 
  if(str[i] == '\0' && ischarset(str[i - 1], charset) == 1)
  {
    total--;
  }
  return total + 1; 
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
  split = malloc((count_word(str, charset) + 1) * sizeof(char *));
  if(split == NULL)
  {
    return NULL;
  }
  if(ischarset(str[y], charset) == 0)
    {
      split[0] = malloc((count_letter(y, str, charset) + 1) * sizeof(char));
    }
  while(i <= count_word(str, charset))
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
    while(split[i][x] != '\0' || str[y])
    {
      if(ischarset(str[y], charset) == 0)
      {
        split[i][x] = str[y];
        x++;
      }
      y++;
      if(ischarset(str[y], charset) == 1 && ischarset(str[y - 1], charset) == 0)
      {
        split[i][x] = '\0';
      }
    }
    i++;
    x = 0;
  } 
  return split;
}


int main()
{
  char **result;
  char str[] = "Hello, Jacques ? It's me !";
//  char str[] = "!Hi, How are you ? Im Fine !!!!!!?";
  char charset[] = ", !?";
  result = ft_split(str, charset);
//  print_split(result);
//  printf("%d\n", count_word(str, charset));
//  printf("%d", count_letter(str, charset));
  return 0;
}
