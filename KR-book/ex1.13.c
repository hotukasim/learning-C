#include<stdio.h>

int main(){
    int words[20];

    for(int i = 0; i < 20; i++)
        words[i] = 0;

    int c, k = 0;

    while((c = getchar()) != EOF){
        if(c != ' ' && c != '\n' && c != '\t'){
            k++;
        }

        if(c == ' ' || c == '\n' || c == '\t'){
            if(k > 0)
                words[k]++;

            k = 0;
        }
    }

    if(k > 0)
        words[k]++;

    for(int i = 0; i < 20; i++){
        if(words[i] > 0){
            printf("%d -> ", i);

            for(int j = 0; j < words[i]; j++)
                printf("*");

            putchar('\n');
        }
    }
}