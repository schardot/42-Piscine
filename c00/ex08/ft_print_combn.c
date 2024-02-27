#include <unistd.h>

void	ft_putchar(char c);
void    ft_write(int n, int *num, int end);
void    ft_increment(int n, int i, int *num);
int ft_islastdigit(int *num, int n);

void ft_print_combn(int n)
{
    int i;
    int end;
    int    num[10];

    i = 0;
    end = 0;
    while (i < n)
    {
        num[i] = i;
        i ++;
    }
    while (end == 0)
    {
        ft_write(n, num, end);
        ft_increment(n, n - 1, num);
        end = ft_islastdigit(num, n);
    }
    ft_write(n, num, end);
    //write(1, "\n", 1);
}

void    ft_write(int n, int *num, int end)
{
    int i;

    i = 0;
    while (i < n)
    {
        ft_putchar(num[i] + '0');
        i ++;
    }
    if (end == 0)
    {
        write(1, ", ", 2);
    }
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_increment(int n, int i, int *num)
{
    int maxdigit;

    maxdigit = 9;
    while (*num <= (10 - n))
    {
        if (num[i] < maxdigit)
        {
            num[i] ++;
            return;
        }
        else
        {
            i --;
            maxdigit --;
            if (i >= 0 && num[i] < maxdigit) 
            {
                num[i]++;
                while ((i + 1) <= (n - 1))
                {
                    num[i + 1] = num[i] + 1;
                    i ++;
                }
                return;
            }
        }
    }
}

int ft_islastdigit(int *num, int n)
{
    int i;
    int maxdigit;

    i = n - 1;
    maxdigit = 9;
    while (i >= 0)
    {
        if (num[i] != maxdigit)
        {
            return (0);
        }
        i --;
        maxdigit --;
    }
    return (1);
}
// int main(void) 
// {
//     ft_print_combn(3);
// }