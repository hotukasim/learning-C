#include<stdio.h>
int main(){
    int a;
    int b = 0, t = 0, n = 0;
    while((a=getchar()) != EOF){
        if(a == ' ') b++;
        if(a == '\t') t++;
        if(a == '\n') n++;
    }
    printf("%d %d %d\n",b, t, n );
}