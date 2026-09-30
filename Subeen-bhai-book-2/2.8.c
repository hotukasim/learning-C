#include<stdio.h>
int main(){
    int x = 10, y;
    int *p, *q;

    p = &x;
    q = &y;
    y = *p; //10
    printf("val of y %d\n", y);
    *p = 15;
    printf("val of y %d\n", y);
    *q = 20;

    printf("val of x %d\n", x);
    printf("val of y %d\n", y);
    printf("val of  *p %d\n", *p);
    printf("val of *q %d\n", *q);
}

/*
10
10 (!)
    15
    20
    15
    20

*/