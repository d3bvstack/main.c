#include <unistd.h>

void    ft_putstr(char *str);
int	ft_strlen(char *str);
/*
int main(void)
{
    ft_putstr("Hola");
}
*/
void    ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

int	ft_strlen(char *str)
{
    int	count;

    count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return (count);
}
