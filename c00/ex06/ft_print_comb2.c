#include <unistd.h>

void	ft_printnumber(int nb);

void	ft_print_comb2(void)
{
    int first;
    int second;

	first = 0;
	while (first <= 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_printnumber(first);
			write(1, " ", 1);
			ft_printnumber(second);
			if (!(first == 98 && second == 99))
				write(1, ", ", 2);
			second ++;
		}
		first ++;
	}
}

void	ft_printnumber(int nb)
{
	char	digit1;
	char	digit2;
	
	digit1 = (nb / 10) + '0';
	digit2 = (nb % 10) + '0';
	write(1, &digit1, 1);
	write(1, &digit2, 1);
}


