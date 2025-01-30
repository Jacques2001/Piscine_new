#include <unistd.h>

void ft_print_alphabet(void)
{
    char c;
    for (c = 'a'; c <= 'z' ; c++)
    {
        write(1, &c, 1);
    }
    write(1, "\n", 1);

}

int main()
{
    ft_print_alphabet();
    return 0;
}
