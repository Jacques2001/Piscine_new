#include <stdio.h>
/*
void ft_ultimate_ft(int **nbr)
{ 
  *nbr = 42;  

  int ***pointeur3 = &pointeur2;
  int ****pointeur4 = &pointeur3;
  int *****pointeur5 = &pointeur4;
  int ******pointeur6 = &pointeur5;
  int *******pointeur7 = &pointeur6;
  int ********pointeur8 = &pointeur7;
  int *********nbr = &pointeur8; 
}

int main() 
{
  int *nbr = nbr;
  printf("before: %d\n", nbr);
  ft_ultimate_ft(&nbr);
  printf("after: %d\n", nbr);
  return(0);
}
*/

void ft_ultimate_ft(int *********nbr)
{
  *********nbr = 42;
}
/
int main()
{
  int age = 30;         
  int *pointeur = &age;    
  int **pointeur2= &pointeur;
  int ***pointeur3 = &pointeur2;
  int ****pointeur4 = &pointeur3;
  int *****pointeur5 = &pointeur4;
  int ******pointeur6 = &pointeur5;
  int *******pointeur7 = &pointeur6;
  int ********pointeur8 = &pointeur7;
  int *********pointeur9 = &pointeur8;
  ft_ultimate_ft(&pointeur8);
  printf("L'adresse de pointeur9 est: %d\n", *********pointeur9);
  
  return 0;
}*/
