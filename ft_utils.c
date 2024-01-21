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

int ft_putuint(unsigned int n)
{
    int index;
    int	count;
    char buffer[20];

    index = sizeof(buffer) - 1;
    count = 0;
    buffer[index] = '\0';
    if (n == 0)
    {
        ft_putchar('0');
        return (1);
    }
    while (n != 0 && index > 0)
    {
        buffer[--index] = '0' + (n % 10);
        n /= 10;
    }
    while (buffer[index])
    {
        ft_putchar(buffer[index++]);
	count++;
    }
    return (count);
}

int	ft_printpercent(void)
{
	ft_putchar('%');
	return (1);
}
