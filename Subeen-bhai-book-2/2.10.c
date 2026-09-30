#include<stdio.h>
int main(){
    int x = 100;
    int *p = NULL;
    printf("val of x %d\n", x);

    p = &x;

    printf("val of p %d\n", *p);

}