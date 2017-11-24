#include <stdio.h>
#define MAXLINE 1000 /* maximum input size */

int getline(char line[], int maxline);

/*	Print length of each input line and as much as possible of the text */	
main()
{
	int len;
	char line[MAXLINE];
	char longest[MAXLINE];

	while((len = getline(line, MAXLINE)) > 0)
	{
		int i;
		i = 0;
		printf("Length: %d", len);
		while(line[i] != '\0')
		{
			printf("%c", line[i]);
			++i;
		}
	}
	return 0;
}


/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i;
	
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}
	
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	
	s[i] = '\0';
	return i;
}