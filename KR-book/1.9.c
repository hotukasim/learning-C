#include<stdio.h>

#define MAXLINE 100

int get_line(char s[], int lim);  //dont use getline this already exist in c !!!
void copy(char to[], char from[]);

int main(){
    int n;
    int max = 0;
    char len[MAXLINE];
    char ans[MAXLINE];

    while((n= get_line(len,MAXLINE)) > 0){
        if(n > max){
            max=n;
            copy(ans,len);
        }
    }
    if(max > 0){
        printf("length = %d\n", max);
        printf("longest line = %s", ans);
    }

}

int get_line(char s[], int lim){
    int c, i;
    for( i = 0; i < lim-1 && (c=getchar())!=EOF && c!= '\n'; i++){
        s[i]=c;
    }
    if(c=='\n'){
        s[i]=c;
        i++;
    }
    s[i]='\0';
    return i;
}
void copy(char to[], char from[]){
    int i = 0;
    while((to[i] = from[i]) != '\0'){
        i++;
    }
}