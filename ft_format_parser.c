#include "ft_printf.h"

int format_parser(va_list args, const char f)
{
        int length;

        length = 0;
        if (f == 'c')
                length += ft_putchar(va_arg(args, int));
}