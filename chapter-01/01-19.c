/* Objective:
 *
 * Write a function reverse(s) that reverses the character string s. Use it to
 * write a program that reverses the input one line at a time.
 */

#include <stdio.h>

#define MAXLINE 1024

int getsline(char line[], int maxline);
void reverse(char line[], int maxline);

int main()
{
    int len = 0;
    char line[MAXLINE];

    while ((len = getsline(line, MAXLINE)) > 0){
        reverse(line, len);
        printf("%s", line); 
    }
}

int getsline(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++){
        s[i] = c;
    }
    if (c == '\n'){
        s[i++] = c;
    }
    s[i] = '\0';

    return i;
}

void reverse(char s[], int max)
{
    int c, i, j;
    if (s[max - 1] == '\n')
        max -= 2;
    else
        max -= 1;

    i = c = 0;
    j = max;

    while( i < j ){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
        i++;
        j--;
    }
}
