#include <unistd.h>

void    ft_print_addr(unsigned long long addr);
long    ft_powerof(long base, int power);

void    *ft_print_memory(void *addr, unsigned int size)
{
    ft_print_addr((unsigned long long) addr);
    write (1, ": ", 2);

   
    return (addr);
}
void    ft_print_addr(unsigned long long addr)
{
    unsigned long long temp;
    int i;
    char hex = "0123456789abcdef"
    i = 0;
    while (addr > 0)
    {
        temp = addr;
        while (temp > 16)
        {
            temp /= 16;
            i ++;
        }
        write(1, hex[temp], sizeof(hex[temp]));
        addr = addr - (temp * ft_powerof(16, i));
    }
}
long    ft_powerof(long base, int power)
{
    int i;

    i = 1;
    while (i < power)
    {
        base *= base;
    }
    return(base)
}
void    ft_print_hex(char *base, char *addr)
{
    int i;

    i = 0;
    while (addr[i] != '\0')
    {
        
    }
}
int main() {
    printf("Size of a memory address: %zu bytes\n", sizeof(void *));
    return 0;
}
