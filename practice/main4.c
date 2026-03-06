#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


int main(int argc, char *argv[]) {
    SetConsoleOutputCP(CP_UTF8);

    int n[10];
    int i;
    int sum, avg;
    int count;

    srand((unsigned int)time(NULL));

    for (i = 0; i < 10; i++) {
        n[i] = rand() % 21 - 10;
        printf("%d ", n[i]);

    }
    //
    // printf("\n");
    // sum = 0;
    // for (i = 0; i < 10; i++) {
    //     sum += n[i];
    // }
    // avg = sum / 10;
    //
    // printf("合計値: %d\n", sum);
    // printf("平均値: %d\n", avg);

    count = 0;
    printf("\n0より大きい数: ");
    // for (i = 0; i < 10; i++) if (n[i] > avg)
    //     printf("%d ", n[i]);
    for (i = 0; i < 10; i++) if (n[i] > 0)
        count++;
        printf("%d個\n" , count);

    count = 0;
    printf("0より小さい数: ");
    // for (i = 0; i < 10; i++) if (n[i] < avg)
    //     printf("%d ", n[i]);
    for (i = 0; i < 10; i++) if (n[i] < 0)
        count++;
        printf("%d個\n", count);

    count = 0;
    printf("0の個数: ");
    for (i = 0; i < 10; i++) if (n[i] == 0)
        count++;
        printf("%d個\n", count);

    return 0;
}