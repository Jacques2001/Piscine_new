#include <stdio.h>
#include <stdlib.h>

struct Player
{
  char user[256];
  int hp;
  int mp;
};

int main()
{
  struct Player p1 = {"Jacques", 100, 100};
  printf("Nom = %s\n", p1.user);
  return 0;
}
