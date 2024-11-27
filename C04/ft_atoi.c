int	ft_atoi(char *str);

#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("%d", ft_atoi(argv[1]));
}

int	ft_atoi(char *str)
{
    int	count;
    int	sign;
    int	result;

    count = 0;
	sign = 1;
	result = 0;
    while (str[count] == 32 || (str[count] >= 9 && str[count] <= 13))
		count++;
	while (str[count] == '-' || str[count] == '+')
		if (str[count] == '-')
		{
			sign = sign * -1;
			count++;
		}
		else
			count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = result * 10;
		result = result + (str[count] - '0');
		count++;
	}
	result = result * sign;
	return (result);
}
