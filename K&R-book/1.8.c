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

    printf("%d\n",b);


}
/*
main এ যা হচ্ছে:
c
int a = 10;
এখানে a = 10।

তারপর:

c
change(a);
এখানে change ফাংশন কল হলো, কিন্তু যা রিটার্ন করল সেটা কোথাও রাখা হয়নি।
তাই এই লাইনের কোনো দৃশ্যমান প্রভাব নেই। শুধু ফাংশন চলল, 20 রিটার্ন করল, কিন্তু কেউ সেটা নিল না।

তারপর:

c
int b = change(a);
এবার আবার change কল হলো, এবং যা রিটার্ন করল সেটা b তে রাখা হলো।
তাই b = 20।

change ফাংশনে যা হচ্ছে:
c
int change(int x)
{
    x = 20;
    return x;
}
change(a) কল করলে x হলো a এর কপি।

প্রথমে x = 10 (কারণ a = 10)।

তারপর x = 20 করা হলো।

তারপর return x; মানে 20 ফেরত দিল।

কিন্তু এটা শুধু x এর কপি বদলাল।
main এর a কিন্তু আগের মতোই 10 ই থাকল।

তাই প্রিন্টে:
c
printf("%d\n", a);
a এখনো 10, তাই প্রিন্ট করে:

text
10
তারপর:

c
printf("%d\n", b);
b হলো 20, তাই প্রিন্ট করে:

text
20
এক লাইনে:
a কখনো বদলায় না, কারণ change ফাংশন a এর কপি নিয়ে কাজ করে। b gets 20 because function returns 20.


*/