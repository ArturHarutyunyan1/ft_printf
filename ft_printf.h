#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>

int	ft_printf (const char *, ...);
int	ft_putchar (int c);
int	ft_putstr(char *str);
int     ft_ptrlen(uintptr_t ptr);
int	ft_printptr(uintptr_t ptr);
int     ft_putnbr(int n);
int     ft_putnbr(int n);
int     ft_putuint(unsigned int n);
int     ft_hexlen(unsigned int hex);
int	ft_printhex(unsigned int hex, const char format);
int     ft_printpercent(void);

void	ft_putptr(uintptr_t ptr);
void    ft_puthex(unsigned int hex, const char format);
#endif
