#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	i;
	size_t	len;

	if (argc != 2)
		return (0);
	i = 0;
	len = strlen(argv[1]);
	while (i < len)
	{
		argv[1][i] -= i;
		i++;
	}
	puts(argv[1]);
	return (0);
}
