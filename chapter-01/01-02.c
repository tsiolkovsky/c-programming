#include <stdio.h>

int main(void){
    /* see 'man 1 printf' for a list of escape characters, for completeness
     * reproduced here:
     * Character escape sequences are in backslash notation as defined in the
     * ANSI X3.159-1989 (``ANSI C89''), with extensions.  The characters and
     * their meanings are as follows:
     *       \a      Write a <bell> character.
     *       \b      Write a <backspace> character.
     *       \c      Ignore remaining characters in this string.
     *       \f      Write a <form-feed> character.
     *       \n      Write a <new-line> character.
     *       \r      Write a <carriage return> character.
     *       \t      Write a <tab> character.
     *       \v      Write a <vertical tab> character.
     *       \'      Write a <single quote> character.
     *       \\      Write a backslash character.
     *       \num
     *       \0num   Write an 8-bit character whose ASCII value is the 1-, 2-,
     *               or 3-digit octal number num.
     */
    printf("hello, world\n");
}
