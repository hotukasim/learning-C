#include <stdio.h>
int main(){
    int a = 12244;
    float b = 23.342342356271346813495;

    printf("%d\n", a);
    printf("%3d\n", a);
    printf("%7d\n", a);
    printf("%16d\n", a);

    printf("%6f\n", b);
    printf("%.2f\n", b);
    printf("%6.2f\n", b);
    printf("%6.8f\n", b);
    printf("%8.5f\n", b);
    printf("%2.9f\n", b);



}

/*
output :

12244
12244
  12244
           12244
23.342342
23.34
 23.34
23.34234238
23.34234
23.342342377

*/