// Write a program to print all input lines that are longer than 80 characters.

#include<stdio.h>

int get_line(char a[], int b)
{
    int i, c;

    for(i = 0; (c = getchar()) != EOF && c != '\n'; i++){
        if(i < b - 1){
            a[i] = c;
        }
    }

    if(i < b - 1){
        a[i] = '\0';
    } else {
        a[b - 1] = '\0';
    }

    return i;
}

#define maxline 100

int main(){
    int i, c;
    char a[maxline];
    char b[maxline];
    while((c=get_line(a,maxline)) > 0){
        if(c > 80){
            printf("%s\n", a);
        }
    }
}