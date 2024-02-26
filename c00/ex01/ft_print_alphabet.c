#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	i;

	i = 'a';
	while (i >= 'a' && i <= 'z')
	{
		ft_putchar(i);
		i ++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_print_alphabet();
}*/
