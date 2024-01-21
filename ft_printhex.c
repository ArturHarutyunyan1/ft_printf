#include "libft/libft.h"
#include "ft_printf.h"

int	ft_hexlen(unsigned int hex)
{
	int	length;

	length = 0;
	while (hex != 0)
	{
		hex /= 16;
		length++;
	}
	return (length);
}

void	ft_puthex(unsigned int hex, const char format)
{
	if (hex >= 16)
	{
		ft_puthex(hex / 16, format);
		ft_puthex(hex % 16, format);
	}
	else
	{
		if (hex <= 9)
			ft_putchar((hex + 48));
		else
		{
			if (format == 'x')
				ft_putchar((hex - 10 + 97));
			if (format == 'X')
				ft_putchar((hex - 10 + 65));
		}
	}
}

int ft_printhex(unsigned int hex, const char format)
{
	if (hex == 0)
		return (ft_putchar('0'));
	else
		ft_puthex(hex, format);
	return (ft_hexlen(hex));
}
