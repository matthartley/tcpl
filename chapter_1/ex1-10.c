#include <stdio.h>

/*
			Copy input to output, replacing:
				each tab with \t 
				each backspace with \b 
				each backslash with \\ 
*/
		
main()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			printf("\\t");
		}
		if (c == '\b')
		{
			printf("\\b");
		}
		if (c == '\\')
		{
			printf("\\");
		}
		putchar(c);
	}
}