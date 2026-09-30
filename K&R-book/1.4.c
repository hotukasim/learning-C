#include <stdio.h>

#define LOWER 0     // preprocessor code compile হওয়ার আগে LOWER-কে 0 দিয়ে replace করে।
                    // কোনো memory location-এ LOWER নামের variable তৈরি হচ্ছে না।
                    // বরং LOWER হলো একটা symbolic name।
#define UPPER 300
#define STEP 20

int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
/*
# before inlcude and defien
এগুলো preprocessor directive।
মানে compiler-এর মূল compilation-এর আগে preprocessor এগুলো handle করে।
সহজভাবে:
তোমার C code
     ↓
Preprocessor
     ↓
# include / #define handle
     ↓
Compiler
     ↓
Machine code
*/