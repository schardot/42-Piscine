#include <stddef.h>

char *ft_strstr(char *str, char *to_find)
{
	char	*foundit;
	if (*to_find == '\0')
		return (str);

	while (*to_find != '\0')
	{
		if (*str == *to_find)
		{
			foundit = str;
			while (*str == *to_find && *to_find != '\0' && *str != '\0')
			{
				str++;
				to_find++;
			}
			if (*to_find == '\0')
				return (foundit);
		}
		if (*str == '\0')
			break;
		str++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	ft_strstr("he quick brown fox jumps over the lazy dog", "dog");
// }
