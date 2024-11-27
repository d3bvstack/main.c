int	ft_strlen(char *str);
/*
int maint(void)
{
    ft_strlen("Hola")
}
*/
int	ft_strlen(char *str)
{
    int	count;

    count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return (count)
}