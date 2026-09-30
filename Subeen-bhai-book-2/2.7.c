#include<stdio.h>
int main(){
    int x = 10, y;
    int *p, *q;

    p = &x;
    y = *p; //10
    *p = 15;
    *q = 20;
    /*
    we must gate segmentation fault
    q কোনো valid address-এ point করছে না। ফলে তুমি unknown memory location-এ write করার চেষ্টা করছ।

    এটা undefined behavior। Program crash করতে পারে, অন্য কিছু print করতে পারে, অথবা আপাতদৃষ্টিতে ঠিকঠাকও চলতে পারে।
    */
    printf("val of x %d\n", x);
    printf("val of y %d\n", y);
    printf("val of  *p %d\n", *p);
    printf("val of *q %d\n", *q);
}

/*

*/