#include<stdio.h>
int main(){
    int *p = NULL;
    *p = 1919;
    printf("val of*p %d\n", *p);

    //again segfault, it tryig to put 100 in *p but "𝙥 𝙞𝙨 𝙣𝙤𝙩 𝙥𝙤𝙞𝙣𝙩𝙞𝙣𝙜 𝙖𝙣𝙮𝙤𝙣𝙚"!!!
}