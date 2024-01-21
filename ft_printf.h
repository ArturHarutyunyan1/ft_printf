#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>

int	ft_printf (const char *, ...);
int	ft_putchar (int c);
int	ft_putstr(char *str);
int     ft_ptrlen(unsigned long long ptr);
int	ft_printptr(unsigned long long ptr);
int     ft_putnbr(int n);
int     ft_putuint(unsigned int n);
int     ft_hexlen(unsigned int hex);
int	ft_printhex(unsigned int hex, const char format);
int     ft_printpercent(void);

void	ft_putptr(unsigned long long ptr);
void    ft_puthex(unsigned int hex, const char format);
#endif
