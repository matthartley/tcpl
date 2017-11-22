#include <stdio.h>

#define IN 1	/* inside a word */
#define OUT 0 /* outside a word */
#define MAX_WORD_LENGTH 10
/*
	Prints a histogram of the lengths of words in input.
*/
		
main()
{
	int i, j, c, state, count;
	int word_lengths[MAX_WORD_LENGTH];
	for (i = 0; i < MAX_WORD_LENGTH; ++i)
	{
		word_lengths[i] = 0;
	}
	
	count = 0;
	
	state = OUT;
	while((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
			++word_lengths[count];
			count = 0;
		}
		else if (state == OUT)
		{
			state = IN;
			++count;
		}
		else
		{
			++count;
		}
	}
	
	if (state == IN)
	{
		++word_lengths[count];
	}
	
	printf("Lengths of words in input:\n");
	for (i = 1; i < MAX_WORD_LENGTH; ++i)
	{
		printf("%2d: ", i);
		for (j = 0; j < word_lengths[i]; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}