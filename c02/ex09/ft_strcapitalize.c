int ft_isword(char letter);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);

char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (ft_isword(str[i]))
        {
            if (ft_isword(str[i - 1]) == 0 || i == 0)
            {
                ft_strupcase(&str[i]);
            }
            else 
            {
                ft_strlowcase(&str[i]);
            }
        }
        i ++;
    }
    return (str);
}

int ft_isword(char letter)
{
    int word;

    word = 0;
    if (letter >= 'a' && letter <= 'z')
        word ++;
    else if (letter >= 'A' && letter <= 'Z')
        word ++;
    else if (letter >= '0' && letter <= '9')
        word ++;
    return (word);
}
char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i ++;
    }
    return (str);
}
char *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i ++;
    }
    return (str);
}