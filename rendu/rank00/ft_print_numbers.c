#include <unistd.h>
#include <stdio.h>

void ft_print_numbers(void)
{
    write(1, "0123456789", 10);
}

int main(void)
{
    ft_print_numbers(); // Call the function directly.

    return 0;
}
