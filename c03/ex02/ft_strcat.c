char *ft_strcat(char *dest, char *src)
{
    while (*dest != '\0')
        dest ++;
    while (*src != '\0')
    {
        *dest = *src;
        dest ++;
        src ++;
    }
    *dest = '\0';
    return (dest);
}
// #include <stdio.h>
// int main(void)
// {
//     char str1[100] = "This is ", str2[] = "programiz.com";
//     printf("%s", ft_strcat(str1, str2));
// }