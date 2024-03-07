#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n < 1)
		return (0);
	while (n --, *s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
// int	main(void)
// {
// 	printf("%d",ft_strncmp("banana", "banane", 5));
// }