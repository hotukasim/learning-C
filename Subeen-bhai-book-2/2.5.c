#include<stdio.h>
int main(){
    int x = 100;
    int *p;

    printf("val of x %d\n", x);
    printf("address of x: %p\n", &x);
    p = &x;
    *p = 20;

    printf("val of x %d\n", x);

    x = 15;

    printf("val of x :%d\n", x);
    printf("val sotred in loc %p is %d\n", p , *p);

    printf("address of x: %p\n", &x);
    printf("valo of p is %p", p);
}

/*
100
20
15
previsous address,20
new address
previous address
*/