#include<stdio.h>
int main(){
    int x = 10;
    int *p;

    p = &x;

    printf("*p = %d\n", *p );

    printf("value of p is %p\n", p); // p er vlaue hoile x er address, %p use korsi cz pointer print korte use hoy

    printf("address of p is %p", &p);
}