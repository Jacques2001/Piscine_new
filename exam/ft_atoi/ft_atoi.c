#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
  int n;
  int i;
  int sign;
  n = 0;
  i = 0; 
  sign = 1;
  if(str[i] == '-')
  {
    sign = -1;
    i++;
  }
  else if(str[i] == '+')
  {
    i++;
  } 
  if((str[i] >= 0 && str[i] < 48) || (str[i] >= 58 && str[i] <= 127))
  {
    return 0;
  }
  while(str[i] != '\0')
  {
    n = (n * 10) + str[i] - 48;
    i++;
    if((str[i] >= 0 && str[i] < 48) || (str[i] >= 58 && str[i] <= 127)) 
    {
      return (n * sign);
    }
  } 
  return (n * sign);
}



void print_atoi(char *str, int index)
{
  int resultat;
  resultat = ft_atoi(str);
  printf("=========== TEST %d ===========\n",index);
  printf("%d\n", resultat);
  printf("%d\n", atoi(str));
  printf("\n");
}

int main()
{
  char str1[] = "---+--+1234ab567";
  char str2[] = "2147483647";
  char str3[] = "++123456";
  char str4[] = "--13457";
  char str5[] = "y12345";
  char str6[] = "12345y6789";
  char str7[] = "9-1234";
  char str8[] = "~~12345";
  char str9[] = "+12345";
  char str10[] = "2147483648";
  char str11[] = "-2147483649";
  print_atoi(str1,1);
  print_atoi(str2,2);
  print_atoi(str3,3);
  print_atoi(str4,4);
  print_atoi(str5,5);
  print_atoi(str6,6);
  print_atoi(str7,7);
  print_atoi(str8,8);
  print_atoi(str9,9);
  print_atoi(str10,10);
  print_atoi(str11,11);

  return 0;
}
