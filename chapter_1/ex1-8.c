#include <stdio.h>

/* Counts blanks, tabs and newlines */

main()
{
	int c, b, t, n;
	b = 0;
	t = 0;
	n = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			++b;
		}
		if (c == '\t')
		{
			++t;
		}
		if (c == '\n')
		{
			++n;
		}
	}
	printf("Blanks: %d, Tabs: %d, Newlines: %d\n", b, t, n);
}