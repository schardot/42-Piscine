int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// int main(void)
// {
//     int base = 3;
//     int power = 2;
//     ft_iterative_power(base, power);
// }