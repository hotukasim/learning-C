#include <stdio.h>

int main()
{
    /*
    Short-Circuit Evaluation

    && এবং || বাম থেকে ডানে evaluate হয়।
    Final result জানা গেলেই C বাকি অংশ evaluate করে না।

    && এর ক্ষেত্রে:
    প্রথম অংশ false হলে দ্বিতীয় অংশ evaluate হয় না।

    || এর ক্ষেত্রে:
    প্রথম অংশ true হলে দ্বিতীয় অংশ evaluate হয় না।
    */

    int a = 0;

    if (a != 0 && 10 / a > 2)
    {
        printf("yes\n");
    }

    a = 5;

    if (a == 5 || 10 / 0 > 2)
        printf("yes\n");

    return 0;
}