#include<stdio.h>

#define MAXLINE 100

int get_line(char a[], int k){
    int c, i;
    for(i = 0; (c=getchar())!= EOF && c != '\n'; i++){
        if(i <  k-1){
            a[i]=c;
        }
    }
    if(c=='\n'){
        if(i < k-1){
            a[i]=c;

        }
        i++;

    }
    if(i < k){
        a[i]='\0';
    }
    else
        a[k-1] = '\0';

    return i;
}
void copy(char to[], char from[]){
    int i = 0;
    while((to[i]=from[i])!= '\0'){
        i++;
    }
}

int  main(){
    int c;
    int mx = 0;
    char l[MAXLINE];
    char sv[MAXLINE];

    while((c = get_line(l,MAXLINE)) > 0){
        if(c > mx){
            mx = c;
            copy(sv, l);

        }
    }
    printf("max line is : %d\n", mx);
    printf("the string is %s", sv);
}


