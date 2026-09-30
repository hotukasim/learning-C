#include<stdio.h>
int main(){
    int n[5] = {12,13,14,15,456};
    printf("address of array is %p\n", n);
    for(int i = 0; i < 5; i++){
        printf("address of a[%d] is %p\n", i, &n[i]);
    }
}