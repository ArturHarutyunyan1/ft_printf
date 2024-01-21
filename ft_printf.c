#include "libft/libft.h"
#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length += ft_putchar(va_arg(args, int));
	else if (format == 's')
		length += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		length += ft_printptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		length += ft_putnbr(va_arg(args, int));
	return (length);
}


int	ft_printf(const char *str, ...)
{
	int	i;
	int	length;
	va_list args;

	va_start(args, str);
	length = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += ft_format(args, str[i + 1]);
			i++;
		}
		else
			length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}

int main()
{
	ft_printf("Printing a single character - %c\n", 'j');
	ft_printf("Printing a string of characters - %s\n", "Gaspar is a nigger");
	ft_printf("Printing a pointer in hexidecimal value %p\n", (void *)4567985);
	ft_printf("Printing an decimal in base 10 - %d\n", 314);
	ft_printf("Printing an integer in base 10 - %i\n", 98);
}

