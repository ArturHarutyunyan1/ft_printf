#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "libft/libft.h"
#include <stdarg.h>

int ft_printf(const char *str, ...);
int format_parser(va_list args, const char f);
int ft_putchar(int c);
int ft_putstr(const char *str);
int ft_hex_len(unsigned long long hex);
int ft_print_hex(unsigned long long hex);
int ft_putnbr(int nb);
unsigned int ft_putuint(unsigned int nb);

void ft_put_hex(unsigned long long hex);
void reverse(const char *str);
#endif