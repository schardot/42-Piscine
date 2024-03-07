#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;

    i = 0;
    while (dest[i] != '\0')
        i++;
    while (nb > 0 && *src != '\0')
    {
        dest[i] = *src;
        i++;
        src++;
        nb--;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char str1[100] = "I love ", str2[] = "youtube";
    printf("%s\n", ft_strncat(str1, str2, 3));
    return 0;
}

