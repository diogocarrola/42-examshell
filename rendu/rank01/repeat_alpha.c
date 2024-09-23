#include <unistd.h>

int main(int argc, char **argv)
{
    int repeat = 0;

    if(argc == 2)
    {
        while (*argv[1])
        {
            if (*argv[1] >= 'a' && *argv[1] <= 'z')
                repeat = *argv[1] - 'a' + 1;
            else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
                repeat = *argv[1] - 'A' + 1;
            else repeat = 1;

            while(repeat > 0)
            {
                write(1, argv[1], 1);
                repeat--;
            }
            argv[1]++;
        }
    }
    write(1, "\n", 1);

    return 0;
}
