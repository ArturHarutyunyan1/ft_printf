#include "ft_printf.h"

int format_parser(va_list args, const char f)
{
        int length;

        length = 0;
        if (f == 'c')
                length += ft_putchar(va_arg(args, int));
        else if (f == 's')
                length += ft_putstr(va_arg(args, char *));
        else if (f == 'p')
                length += ft_print_hex(va_arg(args, unsigned long long));
        return (length);
}