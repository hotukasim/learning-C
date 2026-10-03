#include <stdio.h>

const double PI = 3.141592653589793; // const: এই object-এর value modify করা যাবে না।
const char msg[] = "warning: ";       // এই array-এর elements modify করা যাবে না।

int f; // global variable

int main()
{
    int a;             // variable declaration-এর সময় type দিতে হয়।
    char b, c, d;      // একই declaration-এ multiple variables declare করা যায়।
    char e = 'e';      // declaration-এর সময় initialization করা যায়।

    int n = 100;

    printf("%d\n", f); // global variable defaultভাবে 0 দিয়ে initialized হয়।

    int p;
    printf("%d\n", p); // local automatic variable; initializer নেই, তাই value indeterminate।
}