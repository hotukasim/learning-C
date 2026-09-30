#include<stdio.h>
int main(){
    double pi = 3.141592653589;
    double *p;
    p = &pi;

    printf("val of pi si %lf\n", pi);
    printf("val of pi si %lf\n", *p);

}