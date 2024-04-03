#include <unistd.h>
#include <limits.h>

int ft_checkbase(char *base);
long isnegative(int nbr);
int ft_strcmp(char *s1, char *s2);
long ft_expo(long n, long powerof);

void ft_putnbr_base(int nbr, char *base)
{
    long b;
    long div;
    int round;
    long number;

    round = 0;
    b = ft_checkbase(base);
    if (b <= 1)
        return;
    number = isnegative(nbr);
    if (number == 0)
    {
        write(1, &base[0], 1);
        return;
    }
    while (b > 0 && number >= ft_expo(b, round))
        round++;
    round --;
    while (round >= 0)
    {
        div = number / (ft_expo(b, round));
        number %= (ft_expo(b, round));
        write(1, &base[div], 1);
        round --;
    }
}

int ft_checkbase(char *b)
{
    int i;

    i = -1;
    while (i++, b[i] != '\0')
    {
        if (b[i] == '+' || b[i] == '-' || b[i] == b[i - 1])
            return (1);
    }
    if (i < 2)
        return (1);
    return (i);
}

long isnegative(int nbr)
{
    long number;

    number = nbr;
    if (number == INT_MIN)
    {
        write(1, "-", 1);
        number = -(long long)INT_MIN;
    }
    else if (number < 0)
    {
        write(1, "-", 1);
        number = -number;
    }
    return (number);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}

long ft_expo(long n, long powerof)
{
    long number;

    number = 1;
    while (powerof > 0)
    {
        number *= n;
        powerof--;
    }
    return (number);
}

// int main(void)
// {
//     ft_putnbr_base(-12, "01");
// }
