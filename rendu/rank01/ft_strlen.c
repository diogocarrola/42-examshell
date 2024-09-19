#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (*str++)
        i++;
    return i;
}

int main(void)
{
    char str[] = "Hello, 42!";

    printf("%d", ft_strlen(str));

    return 0;
}
