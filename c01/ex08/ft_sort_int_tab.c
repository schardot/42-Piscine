void ft_swap(int *a, int *b);

void ft_sort_int_tab(int *tab, int size)
{
    int swap;
    int i;

    swap = 1;
    while (swap == 1)
    {
        i = 0;
        swap = 0;
        while (i < size)
        {
            if (tab[i] > tab [i + 1])
            {
                ft_swap(&tab[i], &tab[i + 1]);
                swap = 1;
            }
            i ++;
        }
    }
}

void ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}