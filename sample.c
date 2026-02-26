#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// int main(int argc, char *argv[]) {
//     int num;
//     for (int i = 1; i < 6; i++) {
//         num = rand() %100 + 1;
//         printf("%d\n", num);
//     }
//     return 0;
// }

// int main(int argc, char *argv[]) {
//     int num;
//     srand((unsigned)time(NULL));
//     num = rand() % 10 + 1;
//     if (num % 2 == 1) {
//         for (int i = 0; i < num; i++) {
//             printf("*");
//         }
//     }else if (num % 2 == 0) {
//             for (int i = 0; i < num; i++) {
//                 printf("^");
//             }
//     }
//     printf("\n");
//     return 0;
// }

// int main(int argc, char *argv[]) {
//     int num;
//     for (num = 1; num <= 100; num++) {
//         if (num % 10 == 1) {
//             printf("\n");
//         }
//         printf("%d ", num);
//     }
//     printf("\n");
//     return 0;
// }

// int main(int argc, char *argv[]) {
//     int i, j;
//     for (i = 1; i <= 9; i++) {
//         for (j = 1; j <= 9; j++) {
//             if (i == j | i < j | i > j) {
//                 printf("%d*%d=%d ", i,j,i*j);
//             }
//             if (j == 9) {
//                 printf("\n");
//             }
//         }
//     }
//     return 0;
// }