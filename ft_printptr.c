#include "libft/libft.h"
#include "ft_printf.h"

int	ft_ptrlen(uintptr_t ptr)
{
	int	length;

	length = 0;
	while (ptr != 0)
	{
		ptr /= 16;
		length++;
	}
	return (length);
}

void	ft_putptr(uintptr_t ptr)
{
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar((ptr + 48));
		else
			ft_putchar((ptr - 10 + 97));
	}
}

int ft_printptr(uintptr_t ptr)
{
	int	length;

	length = 0;
	length += ft_putstr("0x");
	if (ptr == 0)
	{
		ft_putchar('0');
	}
	else
	{
		ft_putptr(ptr);
		length += ft_ptrlen(ptr);
	}
	return (length);
}
