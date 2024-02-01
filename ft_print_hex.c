#include "ft_printf.h"

int ft_hex_len(unsigned long long hex)
{
        int length;

        length = 0;
        while (hex != 0)
        {
                hex /= 16;
                length++;
        }
        return (length);
}

void ft_put_hex(unsigned long long hex)
{
    if (hex >= 16)
    {
        ft_put_hex(hex / 16);
        ft_put_hex(hex % 16);
    }
    else
    {
        if (hex <= 9)
            ft_putchar((hex + '0'));
        else
            ft_putchar((hex - 10 + 'a'));
    }
}

int ft_print_hex(unsigned long long hex)
{
    int length;
    
    length = 0;
    if (hex == 0)
    {
        ft_putstr("0x0");
        return (3);
    }
    length += ft_putstr("0x");
    ft_put_hex(hex);
    length += ft_hex_len(hex);
    return (length);
}