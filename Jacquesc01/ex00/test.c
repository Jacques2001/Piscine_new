void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
}

#include <stdio.h>
int main(int argc, char *argv[])
{
    int nombre = 5;

    triplePointeur(&nombre); // On envoie l'adresse de nombre à la fonction
    printf("%d", nombre); // On affiche la variable nombre. La fonction a directement modifié la valeur de la variable car elle connaissait son adresse

    return 0;
}

// void triplePointeur(int copieNombre)
// {
//     copieNombre *= 3; // On multiplie par 3 la valeur de nombre
// 		// valeur supprimee a la fin de la fonction
// }

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
//     int nombre = 5;

//     triplePointeur(nombre);
//     printf("%d", nombre);

//     return 0;
// }
