#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);

}

int main()
{
    ft_putchar('a');
    ft_putchar('\n');
    return 0;
}
