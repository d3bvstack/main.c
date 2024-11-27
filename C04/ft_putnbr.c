#include <unistd.h>

void ft_putnbr(int nb);
void ft_putchar(char c);
/*
int main(void)
{
    ft_putnbr(-2147480648);
    write (1, "\n", 1);
    ft_putnbr(42);
    write (1, "\n", 1);
    ft_putnbr(-42);
    write (1, "\n", 1);
    ft_putnbr(0);
    write (1, "\n", 1);
    ft_putnbr(2147480647);
}
*/
void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write (1, "-2147483648", 11);
    }
    if (nb < 0 && nb != -2147483648)
    {
        nb = -nb;
        write (1, "-", 1);
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
    }
    else
        ft_putchar(nb + '0');
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}