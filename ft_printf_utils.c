#include "ft_printf.h"

void	reverse(const char *str)
{
    int	i;

    i = ft_strlen(str) - 1;
    while (i >= 0)
    {
        ft_putchar(str[i--]);
    }
}

int ft_putchar(int c)
{
        write (1, &c, 1);
        return (1);
}

int ft_putstr(const char *str)
{
        int i;

        i = 0;
        if (str == NULL)
        {
                ft_putstr("(null)");
                return (6);
        }
        while (str[i])
                ft_putchar(str[i++]);
        return (i);
}

int ft_putnbr(int nb)
{
    char *num;
    int length;

    length = 0;
    num = ft_itoa(nb);
    length += ft_putstr(num);
    free (num);
    return (length);
}

unsigned int ft_putuint(unsigned int nb)
{
    char buffer[20];
    char digit;
    int length;

    length = 0;
    if (nb == 0)
    {
        ft_putchar('0');
        return (1);
    }
    while (nb != 0)
    {
        digit = nb % 10;
        buffer[length++] = digit + '0';
        nb /= 10;
    }
    reverse(buffer);
    return (length);
}