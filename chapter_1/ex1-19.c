#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void reverse(char input[]);

/* Remove trailing blanks and tabs from each line of input, and delete entirely blank lines */
main()
{
	int len;
    char input[MAXLINE];
    while ((len = getline(input, MAXLINE)) > 0)
    {
        reverse(input);
        int i;
        for (i = 0; i != '\0'; ++i)
        {
            printf("%s", input);
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

/* reverse: reverses a character string */
void reverse(char in[])
{


    int len;
    for (len = 0; in[len] != '\0'; ++len)
        ;
    
    if (len > 0 && in[len - 1] == '\n')
    {
        --len;
    }

    char temp;
    int i;
    for (i = 0; i < len / 2; ++i)
    {
        int j = len - 1 - i;
        temp = in[i];
        in[i] = in[j];
        in[j] = temp;
    }
}