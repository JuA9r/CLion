#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main(int argc, char *argv[]) {
    SetConsoleOutputCP(CP_UTF8);

    srand((unsigned int)time(NULL));
    int n = rand() % 10 + 1;
    for (int i = 1; i <= n; i++) {
        printf("*");
    }
    printf("\n");

    int i = 1;
    while (i <= n) {
        printf("*");
        i++;
    }
    printf("\n");

    i = 1;
    do {
        printf("*");
        i++;
    } while (i <= n);
    printf("\n\n");

    int a = 0;
    while (a <= 3) {
        printf("a=%d\n", a);
        a++;
    }
    printf("\n");

    for (int a = 0; a <= 3; a++) {
        printf("a=%d\n", a);
    }
    printf("\n");

    return 0;
}

