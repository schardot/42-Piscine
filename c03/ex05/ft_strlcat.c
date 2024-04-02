unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (*dest != '\0' && i < size)
    {
        dest ++;
        i ++;
    }
    while (*src != '\0' && i + 1 < size)
    {
        *dest = *src;
        src ++;
        dest ++;
        i ++;
    }
    *dest = '\0';
    while (*src != '\0')
    {
        i ++;
        src ++;
    }
    return (i);
}