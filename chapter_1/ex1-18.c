#include <stdio.h>

#define MAXLINE 1000
#define ALL_BLANK 1
#define NOT_ALL_BLANK 0

int getline(char line[], int maxline);

/* Remove trailing blanks and tabs from each line of input, and delete entirely blank lines */
main()
{
	int len;
    char line[MAXLINE];
    while ((len = getline(line, MAXLINE)) > 0)
    {
        int i, blank;
        blank = ALL_BLANK;
        i = len - 1;
        while (i >= 0)
        {
            if (line[i] == '\t' || line[i] == ' ' || line[i] == '\n' || line[i] == '\0')
            {
                if (line[i] != '\n')
                {
                    line[i] = '\0';
                }
                else
                {
                    break;
                }
            }
            else
            {
                blank = NOT_ALL_BLANK;
            }
            --i;
        }

        if (!blank)
        {
            for (i = 0; i < len; ++i)
            {
                printf("%c", line[i]);
            }
        }
    }
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