#include <unistd.h>

int ft_atoi(char *str)
{
    int sign;
    int i;
    int aux;

    sign = 1;
    i = 0;
    while (*str == ' ')
        str ++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign *= -1;
        str ++;
    }
    while (*str >= '0' && *str <= '9' && *str != '\0')
    {
        aux = *str - '0';
        i = (i * 10) + aux;
        str ++;
    }
    i *= sign;

    return (i);
}
