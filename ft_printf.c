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

int main() {
    ft_printf("ft_printf\nSingle character - %c"
              "\nString - %s\n"
              "Void * as hexidecimal - %p\n"
              "Decimal in base 10 - %d\n"
              "Integer in base10 - %i\n"
              "Unsigned decimal base 10 - %u\n"
              "Number in hexidecimal uppercase - %X\n"
              "Number in hexidecimal lowercase - %x\n",
              'a',
              "String of characters!",
              (void *) 123456798,
              -42,
              42,
              42,
              123456789,
              123456789
    );
    printf("Original\nSingle character - %c"
              "\nString - %s\n"
              "Void * as hexidecimal - %p\n"
              "Decimal in base 10 - %d\n"
              "Integer in base10 - %i\n"
              "Unsigned decimal base 10 - %u\n"
              "Number in hexidecimal uppercase - %X\n"
              "Number in hexidecimal lowercase - %x\n",
              'a',
              "String of characters!",
              (void *)123456798,
              -42,
              42,
              42,
              123456789,
              123456789
    );
}