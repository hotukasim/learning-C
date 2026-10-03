
#include <stdio.h>

int change(int x)
{
    x = 20;
    return x;
}

int main()
{
    int a = 10;

    change(a);

    int b = change(a);

    printf("%d\n", a);
    printf("%d\n", b);
}

/*
main() এ যা হচ্ছে:

int a = 10;

এখানে a নামের একটি int variable তৈরি হয়েছে
এবং এর value হলো 10।

তারপর:

change(a);

এখানে change() function call করা হয়েছে।

a-এর value (10) copy হয়ে change() function-এর
parameter x-এর মধ্যে গেছে।

function 20 return করেছে, কিন্তু আমরা সেই return value
কোনো variable-এ রাখিনি।

তাই return করা 20 এখানে ব্যবহার করা হয়নি।

অর্থাৎ:

a = 10
change(a) → 20 → value ব্যবহার করা হয়নি


তারপর:

int b = change(a);

এবার আবার change() function call করা হয়েছে।

এখানেও a-এর value 10-এর একটি copy
parameter x-এর মধ্যে গেছে।

change() function 20 return করেছে।

এইবার return করা 20 আমরা b-এর মধ্যে রেখেছি।

তাই:

b = 20


change() function-এর ভিতরে যা হচ্ছে:

int change(int x)
{
    x = 20;
    return x;
}

change(a) call করলে a-এর value-এর একটি copy
x-এর মধ্যে রাখা হয়।

প্রথমে:

x = 10

তারপর:

x = 20

এরপর:

return x;

অর্থাৎ function 20 return করে।

কিন্তু এখানে শুধু x-এর copy পরিবর্তন হয়েছে।
main() এর a পরিবর্তন হয়নি।

কারণ C function argument সাধারণভাবে
pass-by-value হিসেবে কাজ করে।

অর্থাৎ:

a-এর value
    ↓
copy
    ↓
x

তাই x পরিবর্তন করলেও a পরিবর্তন হয় না।


শেষে:

printf("%d\n", a);

a এখনো 10, তাই output:

10


তারপর:

printf("%d\n", b);

b-এর value হলো 20, তাই output:

20


Final output:

10
20


সংক্ষেপে:

a কখনো পরিবর্তন হয়নি, কারণ change() function
a-এর value-এর একটি copy নিয়ে কাজ করেছে।

change() 20 return করেছে।

প্রথমবার সেই 20 কোথাও রাখা হয়নি।

দ্বিতীয়বার সেই 20 b-এর মধ্যে রাখা হয়েছে।

তাই:

a = 10
b = 20
*/
