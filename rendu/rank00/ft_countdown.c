#include <unistd.h>

int main(void)
{
    write(1, "9876543210", 10);
    write(1, "\n", 1);

    return 0;
}
