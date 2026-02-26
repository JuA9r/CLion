#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

// int main(int argc, char *argv[]) {
//     SetConsoleOutputCP(CP_UTF8);
//
//     double one, two, three;
//     double sum, avg;
//     one = 1.2, two = 3.7, three = 4.1;
//     printf("%lf %lf %lf\n", one, two, three);
//     sum = one + two + three;
//     avg = sum / 3.0;
//     printf("合計値: %lf\n", sum);
//     printf("平均値: %lf\n", avg);
//     return 0;
// }

// int main(int argc, char *argv[]) {
//     SetConsoleOutputCP(CP_UTF8);
//
//     double d[3];
//     double sum, avg;
//     int i;
//
//     d[0] = 1.2;
//     d[1] = 3.7;
//     d[2] = 4.1;
//     sum = 0.0;
//     for (i = 0; i < 3; i++) {
//         printf("%f\n", d[i]);
//         sum += d[i];
//     }
//     printf("\n");
//     avg = sum / 3;
//     printf("合計値：%lf\n", sum);
//     printf("平均値：%lf\n", avg);
//     return 0;
// }

// int main(int argc, char *argv[]) {
//     SetConsoleOutputCP(CP_UTF8);
//
//     int n[] = {5, 4, 3, 2, 1};
//     int i;
//     for (i = 0; i < 5; i++) {
//         printf("n[%d]=%d ",i, n[i]);
//     }
//     printf("\n");
//     return 0;
// }

// int main(int argc, char *argv[]) {
//     char s1[4] = { 'a', 'b', 'c', '\0' };
//     char s2[] = "HelloWorld.";
//     char s3[10];
//
//     printf("Enter a string: ");
//     scanf("%s", s3);
//     printf("s1 = %s\n", s1);
//     printf("s2 = %s\n", s2);
//     printf("s3 = %s\n", s3);
//     return 0;
// }

// int main(int argc, char *argv[]) {
//     SetConsoleOutputCP(CP_UTF8);
//
//     int a[3][4];
//     int m, n;
//     for (m = 0; m < 3; m++) {
//         for (n = 0; n < 4; n++) {
//             a[m][n] = m+n;
//         }
//     }
//
//     for (m = 0; m < 3; m++) {
//         for (n = 0; n < 4; n++) {
//             printf("%d ", a[m][n]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// TODO Practice problem

// int main(int argc, char *argv[]) {
//     SetConsoleOutputCP(CP_UTF8);
//
//     int n[] = {1, 5, 8, 7, 10, 1};
//     int i;
//     for (i = 0; i <= 5; i++) {
//         printf("n[%d]=%d ",i, n[i]);
//     }
//     printf("\n");
//     return 0;
// }

// int main(int argc, char *argv[]) {
//     SetConsoleOutputCP(CP_UTF8);
//
//     float n[] = {1.2, -1.3, 5.2, 4.8};
//     int i;
//     for (i = 0; i < 4; i++) {
//         printf("d[%d]=%.1f ",i, n[i]);
//     }
// }

// int main(int argc, char *argv[]) {
//     SetConsoleOutputCP(CP_UTF8);
//
//     int arr[10];
//     int i, j, temp;
//
//     for (i = 0; i < 10; i++) arr[i] = i + 1;
//     srand((unsigned)time(NULL));
//
//     for (i = 9; i > 0; i--) {
//         j = rand() % (i + 1);
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     for (i = 0; i < 10; i++) {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//
//     printf("奇数: ");
//     for (i = 0; i < 10; i++) {
//         if (arr[i] % 2 == 1) {
//             printf("%d ",arr[i]);
//         }
//     }
//     printf("\n");
//
//     printf("偶数: ");
//     for (i = 0; i < 10; i++) {
//         if (arr[i] % 2 == 0) {
//             printf("%d ",arr[i]);
//         }
//     }
//     return 0;
// }

int main(int argc, char *argv[]) {
    SetConsoleOutputCP(CP_UTF8);

    int arr[10];
    int i, j, temp;

    for (i = 0; i < 10; i++) arr[i] = i + 1;
    srand((unsigned)time(NULL));

    for (i = 9; i > 0; i--) {
        j = rand() % (i + 1);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (i = 0; i < 10; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("5以上の数: ");
    for (i = 0; i < 10; i++) {
        if (arr[i] > 5) {
            printf("%d ",arr[i]);
        }
    }
    printf("\n");

    printf("5以下の数: ");
    for (i = 0; i < 10; i++) {
        if (arr[i] < 5) {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}