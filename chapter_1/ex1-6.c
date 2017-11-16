#include <stdio.h>

/* Verifying that getchar() != EOF is 0 or 1 */

main()
{
	int c = getchar() != EOF;
	printf("%d\n", c);
}