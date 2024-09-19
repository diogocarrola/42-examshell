#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int swap = 0;

    swap = *a;
    *a = *b;
    *b = swap;
}

int main(void)
{
    int a = 4;
    int b = 2;

    ft_swap(&a, &b);

    printf("a: %d, b: %d\n", a, b);

    return 0;
}
