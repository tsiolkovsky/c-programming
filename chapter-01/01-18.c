/* OBJECTIVE
 * Write a program to remove trailing blanks and tabs from each line of input
 * and delete entirely blank lines 
 *
 * STRATEGY
 * Ingest one line at a time, at the end of the read backwards, and mark the
 * first non-space character located.
 */
#include <stdio.h>
#define MAXLINE 1024    /* maximum input line size */


int getsline(char line[], int maxline);
int clean(char line[], int len);

int main(void)
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */
    
    while ((len = getsline(line, MAXLINE)) > 0){
        len = clean(line, len);
        if (len){
            printf("%4d:\t%s", len, line);
        }
    }

    return 0;
}

int getsline(char s[], int lim)
{
    int c = 0;
    int i = 0;

    for (i = 0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; i++) {
        s[i] = c;
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int clean(char s[], int len)
{
    int i = len - 1;
    while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') &&  i > 0) {
        i--;
    }
    if (i < len - 2){
        s[++i] = '\n';
        s[++i] = '\0';
    }
    return i;
}
