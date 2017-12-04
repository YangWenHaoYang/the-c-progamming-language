#include <stdio.h>
#define    MAXLINE    1000		/* maximum input line size */
#define    LONGLINE   80

int get_line(char line[], int maxline);

/* print lines longer than LONGLINE */
main()
{
	int len;				/* current line length */
	char line[MAXLINE];		/* current input line */

	while ((len = get_line(line, MAXLINE)) > 0)
		if (len > LONGLINE)
			printf("%s", line);
	return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim)
{
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) 
		if (i < lim-2) {
			s[j] = c;
			++j;
		}
	if (c == '\n') {
		s[j] = c;
		++j;
		++i;
	}
	s[j] = '\0';
	return i;
}	
	
