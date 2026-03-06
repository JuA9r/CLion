#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[]) {
    SetConsoleOutputCP(CP_UTF8);

    printf("Hello, World!\n");

    printf("123\n456\n789\n");

    printf("%d + %d = %d\n", 1, 2, 1+2);
    printf("%d + %d = %d\n", 2, 3, 2+3);

    printf("%d + %d + %d = %d\n", 1, 2, 3, 1+2+3);

    int a, b;
    printf("a="), scanf("%d", &a);
    printf("b="), scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = %d\n", a, b, a%b);

    return 0;
}