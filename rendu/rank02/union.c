#include <unistd.h>

int not_seen_before(char *av, int max_pos, char c)
{
	int i = 0;

	while (i < max_pos)
	{
		if (av[i] == c)
		
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
    int	i = 0;
	int j;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (not_seen_before(argv[1], i, argv[1][i]))
				write(1, &argv[1][i], 1);
			i++;
		}

		j = 0;
		while (argv[2][j])
		{
			if (not_seen_before(argv[1], i, argv[2][j]) && not_seen_before(argv[2], j, argv[2][j]))
				write(1, &argv[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
