#include <stdio.h>

#define MAX 300
#define STEP 20

/*
	Rewrite of temperature conversion program: using a function.
*/

float convert(int celsius);
		
main()
{
	int celsius;
	for (celsius = 0; celsius <= MAX; celsius = celsius + STEP)
	{
		printf("%3d %6.1f\n", celsius, convert(celsius));
	}
}

float convert(int c)
{
	return ((5.0 / 9.0) * c) + 32;
}