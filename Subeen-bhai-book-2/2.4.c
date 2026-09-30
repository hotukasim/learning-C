#include<stdio.h>
int main(){
    int x = 10;
    int *p = &x;
    printf("val of x %d\n", x);

    *p= 300;

    printf("val of x %d\n", x);
    printf("addrss of x %p\n", &x);
    printf("val of p: %p", p);
}