#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int main(int argc, char *argv[]) {
    SetConsoleOutputCP(CP_UTF8);

    // int num;
    // printf("num=");
    // scanf("%d", &num);
    //
    // if (num >= 5) printf("5以上です。\n");
    // else printf("5未満です。\n");
    //
    // if (num != 1) printf("1ではありません。\n");
    //
    // if (num < 50) printf("50未満です。\n");
    //
    // if (num <= 10 | num >= 90) printf("10以下または90以上です。\n");
    //
    // if (num >= 20 & num < 80) printf("20以上80未満です。\n\n");


    int n, m;
    srand((unsigned int)time(NULL));
    n = rand() % 10 + 1;
    printf("数値: %d\n", n);
    if (n >= 5) printf("5以上です。\n");
    else printf("5未満です。\n");

    if (n == 1) printf("1です。\n\n");
    else printf("1ではありません。\n\n");

    n = rand() % 100 + 1;
    printf("数値: %d\n", n);
    if (n < 50) printf("50未満です。\n");
    else printf("50以上です。\n");

    if (n >= 20 & n < 80) printf("20以上80未満です。\n\n");
    else printf("20未満または80以上です。\n\n");

    n = rand() % 21 - 10;
    printf("数値: %d\n", n);
    if (n > 0) printf("正の値です。\n\n");
    else if (n < 0) printf("負の値です。\n\n");
    else printf("0です。\n\n");

    n = rand() % 3 + 1;
    printf("数値: %d\n", n);
    if (n == 1) printf("グー\n\n");
    else if (n == 2) printf("パー\n\n");
    else printf("チョキ\n\n");

    n = rand() % 10 + 1;
    m = rand() % 10 + 1;
    printf("数値: n=%d, m=%d\n", n, m);
    if (m > n) printf("mの方がおおきいです。\n\n");
    else if (m < n) printf("nの方がおおきいです。\n\n");
    else printf("等しいです。\n\n");

    n = rand() % 100 + 1;
    printf("数値: %d\n", n);
    if (n >= 80) printf("優\n");
    else if (n >= 70 & n < 80) printf("良\n");
    else if (n >= 60 & n < 70) printf("可\n");
    else printf("不可\n");

    if (n % 2 == 0) printf("2の倍数です。\n");
    else if (n % 3 == 0) printf("3の倍数です。\n");
    else if (n % 2 == 0 & n % 3 == 0) printf("2と3の公倍数です。\n");

    if (n <= 50) printf("50以下です。\n\n");
    else if (n % 2 == 0) printf("偶数です。\n\n");
    else if (n <= 50 & n % 2 == 0) printf("50以下の偶数です。\n\n");

    n = rand() % 36 - 10;
    printf("摂氏%d℃\n", n);
    if (n >= 30) printf("真夏日です。\n\n");
    else if (n >= 25 & n < 30) printf("夏日です。\n\n");
    else if (n < 0) printf("真冬日です。\n\n");

    return 0;
}