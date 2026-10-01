#include<stdio.h>
int main(){
    printf("\0\n");
    printf("%d %d %d",31,037,0x1F);

    int x = 31;
    printf("%d %o %x %X",x,x,x,x);
    /*
    %d  → decimal
    %o  → octal
    %x  → hexadecimal (lowercase)
    %X  → hexadecimal (uppercase)
    */


}