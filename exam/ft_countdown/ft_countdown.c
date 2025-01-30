#include <unistd.h>

int main()
{
  char d;
  d = '9';
  while(d >= '0')
  {
    write(1, &d, 1);
    d--;
  }
  write(1, "\n", 1);
  return 0;
}
