void ft_rev_int_tab(int *tab, int size)
{
    int aux;
    int i;
    int j;

    i = size - 1;
    j = 0;
    while (i > j )
    {
        aux = tab[i];
        tab[i] = tab[j];
        tab[j] = aux;
        i --;
        j ++;
    }
}