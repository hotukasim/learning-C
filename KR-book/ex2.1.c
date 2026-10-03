#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<float.h>

int main(){
    int n;
    //printf("%d\n",sizeof(n));
    //printf("int: %d  %d \n", INT_MIN, INT_MAX);
    // int x = pow(2,31)-1;
    // printf("%d\t%d\t%d\t%d\n",x, x+1, x+2, pow(2,35)); // this are wrong way

    // int s = 1;
    // for(int i = 1; i <= 30; i++){
    //     s*=2;
    // }
    // s--;
    // s*=2;
    // s++;
    // printf("range : %d", s);

    int k = sizeof(n)* CHAR_BIT;
    //printf("%d\n", k);
    //printf("%d", CHAR_BIT);

    int s = 1;
    for(int i=1;i<k;i++){
        s*=2;
    }
    printf("range of int %d to %d\n", -s, s-1);


    // for char

    k = sizeof(char)*CHAR_BIT;
    s=1;
    for(int i=0;i<k;i++) s*=2;

    printf("unsigned char range: %d to %d\n", 0, s-1);
    printf("signed char range: %d to %d\n", -s/2, s/2-1);

    //short
    printf("size of shor is %d\n", sizeof(short));


}