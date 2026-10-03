
#include <stdio.h>

int main() {
    int words[26];

    for (int i = 0; i < 26; i++) {
        words[i] = 0;
    }

    int c;

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            words[c - 'a']++;
        }
        else if (c >= 'A' && c <= 'Z') {
            words[c - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", words[i]);
    }

    putchar('\n');

    for (int i = 0; i < 26; i++) {
        if (words[i] > 0) {
            printf("%c -> ", 'a' + i);

            for (int j = 0; j < words[i]; j++) {
                printf("*");
            }

            putchar('\n');
        }
    }
}
