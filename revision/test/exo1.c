#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Etudiant
{
  char nom[50];
  int age;
  float note;
}Etudiant;

void initialiserEtudiant(Etudiant *info)
{
  strcpy(info->nom, "Alice");
  info->age = 20;
  info->note = 18.5;
}

void afficherEtudiant(Etudiant info)
{
  printf("Nom : %s\n", info.nom);
  printf("Age : %d\n", info.age);
  printf("Note : %.2f\n", info.note);
}

int main()
{
  Etudiant info;
  initialiserEtudiant(&info);
  afficherEtudiant(info);
  return 0;  
}
