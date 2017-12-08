#include <stdio.h>

#define MAXLINE 1000
#define TABSTOPS 4

int getline(char line[], int maxline);
int calcNextTabstop(int position);
int calcModulus(int pos);

/* Detab: replaces tabs with blanks to space to next tab stop */
	
main()
{
	int len;
    char line[MAXLINE];
    char output[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        int i, ntab;
        for (i = 0; i < len - 1; ++i)
        {
            if (line[i] == '\t')
            {
                if ((ntab = calcNextTabstop(i)) != -1)
                {
                    int j;
                    for (j = 0; j < ntab; ++j)
                    {
                        printf(" ");
                    }
                }
            }
            else
            {
                printf("%c", line[i]);
            }
        }
        printf("\n");
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

/* calcNextTabStop: calculates distance between posititon and next tabstop */
int calcNextTabstop(int position)
{
    int x = position + 1;
    if (x == 4)
    {
        return 4;
    }
    else if (x < 4)
    {
        return 4 - x;
    }
    else
    {
        return  4 - calcModulus(x);
    }
}

/* calcModulus: calculate remainder given an integer */
int calcModulus(int pos)
{
    int q, p;
    q = pos / 4;
    p = q * 4;
    return pos - p;
}