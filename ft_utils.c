#include "libft/libft.h"
#include "ft_printf.h"

int ft_putchar(int c)
{
	write (1, &c, 1);
	return (1);
}

int ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
	
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	int	length;
	char	*num;

	length = 0;
	num = ft_itoa(n);
	length = ft_putstr(num);
	free(num);
	return (length);
}
