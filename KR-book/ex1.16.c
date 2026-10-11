#include <stdio.h>

#define MAXLINE 30

int get_line(char a[], int b);
void copy(char a[], char b[]);

int main()
{
    int c;
    char a[MAXLINE];
    char b[MAXLINE];
    int mx = 0;

    while ((c = get_line(a, MAXLINE)) > 0) {
        if (mx < c) {
            mx = c;
            copy(b, a);
        }
    }

    if (mx > 0) {
        printf("Longest line: %s\n", b);
        printf("Length: %d\n", mx);
    }

    return 0;
}

int get_line(char a[], int b)
{
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
        if (i < b - 1)
            a[i] = c;
    }

    if (i < b - 1)
        a[i] = '\0';
    else
        a[b - 1] = '\0';

    return i;
}

void copy(char a[], char b[])
{
    int i = 0;

    while ((a[i] = b[i]) != '\0')
        i++;
}