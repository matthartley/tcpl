#include <stdio.h>

#define MAXLINE 1000
#define TABSTOPS 4

int getline(char line[], int maxline);
int calcNextTabstop(int position);
int countblanks(char input[]);
char* replaceblanks(char input[]);

/* 
Entab: 

replaces replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing.

If tab or blank achieves same output: use tab.

*/
	
main()
{
	char line[MAXLINE] = { 0 };
	int len, count, first_space, last_space;
	len = count = first_space = last_space = 0;

	while ((len = getline(line, MAXLINE)) > 0)
	{
		for (int i = 0; i < len - 1; ++i)
		{
			if (line[i] == ' ')
			{
				replaceblanks(countblanks(line, i));
			}
		}
	}
}

int countblanks(char input[], int startpos)
{

}

char* replaceblanks(char input[])
{
	char tempStr[MAXLINE] = { 0 };
	return tempStr;
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