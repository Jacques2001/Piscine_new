#include <stdio.h>
#include <stdlib.h>

// si flemme alors directement ecrire ici
typedef struct Player
{
  char user[256];
  int hp;
  int mp;
}Joueur; //il faut rajouter le nom de l'alias ici, a la fin

// creer un alias pour racourcir l'ecriture
//typedef struct Player PLayer;

int main()
{
  Joueur p1 = {"Jacques", 100, 100};
  printf("Nom = %s\n", p1.user);
  return 0;
}

