#include <unistd.h>

int main()
{
  char alphabet;
  char ALPHABET;
  alphabet = 'a';
  ALPHABET = 'A';
  while(alphabet <= 'z' && ALPHABET <= 'Z')
  {
    write(1, &alphabet, 1);
    ALPHABET = ALPHABET + 1;
    write(1, &ALPHABET, 1);
    alphabet = alphabet + 1;   
    alphabet++;
    ALPHABET++;
  }
  write(1, "\n", 1);
  return 0;
} 
