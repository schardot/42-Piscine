#include <unistd.h>

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int third;
	char	digit1;
	char	digit2;
	char	digit3;

	first = 0;
	second = 1;
	third = 2;
	while (first <= 7)
	{
		digit1 = first + '0';
		while (second <= 8)
		{
			digit2 = second + '0';
			while (third <= 9)
			{
				digit3 = third + '0';
				write(1, &digit1, 1);
				write(1, &digit2, 1);
				write(1, &digit3, 1);
				if (!(first == 7 && second == 8 && third == 9))
                {
                    write(1, ", ", 2);
                }
				third ++;
			}
			second ++;
			third = second + 1;
		}
		first ++;
		second = first + 1;
		third = second + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}*/