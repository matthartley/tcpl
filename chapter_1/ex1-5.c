#include <stdio.h>

/* print Celsius-Fahrenheit table */

main()
{
	int celsius;
	for (celsius = 0; celsius <= 300; celsius = celsius + 20)
	{
		printf("%3d %6.1f\n", celsius, ((5.0 / 9.0) * celsius) + 32);
	}
}