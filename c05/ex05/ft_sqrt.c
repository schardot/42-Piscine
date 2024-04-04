int ft_recursive_power(int nb, int power);

int ft_sqrt(int nb)
{
    int result;

    if (nb <= 0 || nb == 2)
        return (0);
    else if (nb == 1)
        return (1);
    result = ft_recursive_power(nb/2, 2);
    if (result == nb)
        return (result);
    else if (result > nb)
        return (ft_sqrt(nb / 2));
    else
        return (ft_sqrt((nb / 2) + 1));
}

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    return (nb * ft_recursive_power(nb, power - 1));
}

// int main(void)
// {
//     ft_sqrt(9);
// }