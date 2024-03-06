#include <unistd.h>

void	ft_print_addr(unsigned long long addr);
long	ft_powerof(long base, int power);
void	ft_print_hex(char *chunk, unsigned int size);
void	ft_putchar(char c);

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*chunk;

	chunk = addr;
	while (size > 0)
	{
		ft_print_addr((unsigned long long) chunk);
		if (size < 16)
		{
			ft_print_hex(chunk, size);
			write(1, chunk, size);
			size = 0;
		}
		else
		{
			ft_print_hex(chunk, 16);
			write(1, chunk, 16);
			chunk += 16;
			size -= 16;
		}
		ft_putchar('\n');
	}
	return (addr);
}

void	ft_print_addr(unsigned long long addr)
{
	char	*hex;
	char	array[16];
	int		i;

	hex = "0123456789abcdef";
	i = -1;
	while (i++ < 16)
		array[i] = '0';
	i --;
	while (i--, addr >= 16)
	{
		array[i] = hex[addr % 16];
		addr /= 16;
	}
	array[i] = hex[addr];
	write(1, array, 16);
	write (1, ": ", 2);
}

long	ft_powerof(long base, int power)
{
	int	i;

	i = 1;
	while (i < power)
	{
		base *= base;
		i ++;
	}
	return (base);
}

void	ft_print_hex(char *chunk, unsigned int size)
{
	int             aux;
	unsigned int	i;
	char            *base;

	base = "0123456789abcdef";
	i = 0;
	while (i < size)
	{
		ft_putchar((chunk[i] / 16) + '0');
		aux = (chunk[i] % 16);
		ft_putchar(base[aux]);
		if (i % 2 != 0)
			ft_putchar(' ');
		i ++;
	}
	while (i < 16)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (i % 2 != 0)
			ft_putchar(' ');
		i ++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
