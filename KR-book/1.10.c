#include <stdio.h>

#define maxline 100

int max;
char line[maxline];
char maximum[maxline];

int get_line(void);
void copy(void);

int main()
{
    int len;
    extern int max;
    extern char line[];
    extern char maximum[];

    max = 0;

    while ((len = get_line()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }

    if (max > 0) {
        printf("%s\n", maximum);
    }

    return 0;
}

int get_line(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < maxline - 1 &&
         (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }

    line[i] = '\0';
    return i;
}

void copy(void)
{
    int i;
    extern char line[], maximum[];

    i = 0;
    while ((maximum[i] = line[i]) != '\0') {
        i++;
    }
}