#include <unistd.h>

void	ft_putchar(char c);

void    ft_putstr_non_printable(char *str)
{
    int i;
    char    hex[] = "0123456789abcdef";

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 32 || str[i] > 126)
        {
            ft_putchar('\\');
            ft_putchar(hex[(unsigned char)str[i] / 16]);
            ft_putchar(hex[(unsigned char)str[i] % 16]); 
        }
        else
        {
            ft_putchar(str[i]);
        }
        i ++;
    }
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}