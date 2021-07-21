#include <unistd.h>
#include <stdio.h>

int	main (void)
{
	int	a;
	char b = '0';
	char s[4];

	write (1, "\n", 1);

	for (a = 0; a < 79; a++)
	{
		printf ("  a=%d   b=%c___", a, b);
		s[a] = b++;
		write (1, &s[a],1);
		write (1, "\n", 1);

	}
	return (0);

}