#include<stdio.h>
int main(){
    int a,last=0;
    while((a=getchar()) != EOF){
        if(a == ' ' && last == ' '){
            continue;
        }
        putchar(a);
        last = a;

    }


}