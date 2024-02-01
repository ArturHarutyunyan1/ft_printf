#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
        int i;
        int length;
        va_list args;
        
        i = 0;
        length = 0;
        va_start(args, str);
        while (str[i])
        {
                if (str[i] == '%')
                {
                        i++;
                        length += format_parser(args, str[i]);
                }
                else
                {
                        length += ft_putchar(str[i]);
                }
                i++;
        }
        return (length);
}

int main()
{
        ft_printf("ft_printf\nSingle character - %c\nString - %s\nVoid * as hexidecimal - %p\nDecimal in base 10 - %d\nInteger in base10 - %i\n", 'a', "String of characters!", (void *)123456798, -42, 42);
//        printf("printf\nSingle character - %c\nString - %s\nVoid * as hexidecimal - %p\n", 'a', "String of characters!", (void *)123456798);
}