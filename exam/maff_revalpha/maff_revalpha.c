#include <unistd.h>

int main()
{
  char alphabet;
  char ALPHABET;
  alphabet = 'z';
  ALPHABET = 'Z';
  while(alphabet >= 'a' && ALPHABET >= 'A')
  {
    write(1, &alphabet, 1);
    ALPHABET = ALPHABET -  1;
    write(1, &ALPHABET, 1);
    alphabet = alphabet - 1;   
    alphabet--;
    ALPHABET--;
  }
  write(1, "\n", 1);
  return 0;
} 
