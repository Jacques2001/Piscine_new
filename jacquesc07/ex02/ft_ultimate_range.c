#include <stdlib.h>
#include <stdio.h>

//int **range -> 3 adress [&range,range, *range]
int ft_ultimate_range(int **range, int min, int max)
{

  printf("in ultimate range 1\n");
  printf("&range: %p\n", &range);  // Adresse du pointeur double
  printf("range: %p\n", range);    // Adresse du pointeur simple
  printf("*range: %p\n\n", *range);  // Adresse du tableau (avant allocation)

  int i;
  i = 0;
  if(min >= max)
  {
    *range = NULL;
    return 0;
  }
  *range = malloc((max - min) * sizeof(int));
  if(range == NULL)
  {
    return -1;
  }
	printf("in ultimate range 2\n");
  printf("&range: %p\n",&range);
  printf("range: %p\n",range);
  printf("*range: %p\n\n",*range);
  while(min < max)
  {
    (*range)[i] = min;
    i++;
    min++;
  }
  return i;
}


void print_range(int **range,int size)
{
  for(int i= 0;i < size;i++)
  {
    printf("%d\n",(*range)[i]);
  }
  printf("\n");
}

int main()
{
  int i;
  int min;
  int max;
  int result;
  int *r; // 2 adress : [&range, range]
  i = 0;
  min = 10;
  max = 20;

  printf("in main\n");
  printf("&r: %p\n",&r);
  printf("r: %p\n\n",r);
  result = ft_ultimate_range(&r, min, max);
  print_range(&r, result);
	printf("result: %d\n", result);
  return 0;
}

// void	test(int *b)
// {
// 	*b = 32;
// }

// int main()
// {
// 	int a = 42;

// 	test(&a);
// 	printf("%d\n", a);
// }
