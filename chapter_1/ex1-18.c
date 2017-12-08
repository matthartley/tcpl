#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);

/* Remove trailing blanks and tabs from each line of input, and delete entirely blank lines */
main()
{
	int len;
    char line[MAXLINE];
    while ((len = getline(line, MAXLINE)) > 0)
    {
        int i, blanks_seen, first_char,have_seen_char;
        i = len - 1;

        have_seen_char = 0;
        while (i >= 0)
        {
            if (!have_seen_char)
            {
                if (line[i] == '\t' || line[i] == ' ' || line[i] == '\n')
                {
                    line[i] = '\0';
                }
                else if (i == 0)
                {
                    line[i] == '\0';
                }
                else
                {
                    have_seen_char = 1;
                }
            }
            --i;
        }

        for (i = 0; i < len; ++i)
        {
            printf("%c", line[i]);
        }
        if (line[0] != '\0')
        {
            printf("\n");
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