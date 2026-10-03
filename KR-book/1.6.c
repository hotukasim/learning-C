#include<stdio.h>

int main(){
    int c, nwhite, nother;
    nwhite = nother = 0;

    int ndigti[10];

     for(int i = 0; i < 10; i++){
        ndigti[i] = 0;
     }

     while((c=getchar()) != EOF){
        if(c >= '0' && c <= '9'){
            ndigti[c-'0']++;
        }
        else if(c == ' '  || c=='\t' || c=='\n'){
            nwhite++;
        } else{
            nother++;
        }
     }

    for(int i = 0; i < 10; i++){
        printf("%d ",ndigti[i]);
    }
    printf("\n, white space %d, other %d\n", nwhite, nother);
}