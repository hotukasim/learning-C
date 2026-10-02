#include<stdio.h>
int main(){
    int a = 10;
    double b = a; // now b = 10.0

    char c = 'A';
    int x = c;  //এটাকে integer promotion বলা হয়।
    printf("%d\n", x); //

    float e = 22.33;
    int w  =  x; //float → int করলে decimal অংশ বাদ যায় . এটাকে truncation বলে।

    int xx;

    xx = 5 > 3; //xx = 1
    double y = 3.99;

    int N = (int)y;
                    // x 3 হয়ে যায়নি।

                    //(int)x শুধু converted value তৈরি করেছে।


}