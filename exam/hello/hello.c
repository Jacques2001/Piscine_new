#include <unistd.h>

int main()
{
  write(1, "Hello World!\n", 14);
  return 0;
}
