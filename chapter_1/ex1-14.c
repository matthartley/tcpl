#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0 /* outside a word */
#define MAX_CHARS 255

/*
	Prints a histogram of the frequencies of different characters of input.
*/
		
main()
{
	int i, j, c, state, count;
	int char_freq[MAX_CHARS];
	for (i = 0; i < MAX_CHARS; ++i)
	{
		char_freq[i] = 0;
	}
	count = 0;
	
	while ((c = getchar()) != EOF)
	{
		++char_freq[c];
	}
	
	for (i = 0; i < MAX_CHARS; ++i)
	{
		printf("%c: ", i);
		for (j = 0; j < char_freq[i]; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}