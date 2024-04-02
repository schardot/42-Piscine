#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long	longnb;

	longnb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		longnb = longnb * -1;
	}
	if (longnb >= 10)
	{
		ft_putnbr(longnb / 10);
	}
	ft_putchar(longnb % 10 + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
