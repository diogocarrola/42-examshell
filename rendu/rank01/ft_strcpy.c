#include <unistd.h>

char *ft_strcpy(char *s1, char *s2)
{
    while (*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return s1;
}

int main(void)
{
    char src[] = "Hello, 42!";
    char dest[15];

    ft_strcpy(dest, src);
    write(1, dest, 12);

    return 0;
}
