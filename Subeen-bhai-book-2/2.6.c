#include<stdio.h>
int main(){
    int x = 10, y , *p;
    printf("val of x: %d\n", x);

    p = &x;
    y = *p; // y = x;
    *p = 15;

    printf("val of x %d\n", x);
    printf("val of y %d\n", y);
    printf("val of *p %d\n", *p);

    printf("address of x %p\n", &x);
    printf("address of y %p\n", &y);

    printf("val of p %p\n", p);

}

/*
10
15
10
15
address x
address y
address x
*/