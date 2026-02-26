#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// #define MAX_TEXT 16384
// #define MAX_NAME 64
//
// void save_to_file(char *file_name, char *content) {
//   FILE *fp = fopen(file_name, "w");
//    if (fp == NULL) {
//        printf("Error: Don't save file\n");
//        return;
//        }
//    fprintf(fp, "%s", content);
//    fclose(fp);
//    printf("Saved file %s\n", file_name);
// }

int main() {
    SetConsoleOutputCP(CP_UTF8);

    char text[1000];
    FILE *fp;

    printf("----- Memo -----\n\n");
    printf("保存する内容を入力してください.\n");

    fp = fopen("memo.txt", "w");
    if (fp == NULL) {
        printf("Don't open file.");
        return 1;
    }

    while (fgets(text, sizeof(text), stdin) != NULL) {
        fprintf(fp, "%s", text);
    }

    fclose(fp);
    printf("\n Save into the [memo.txt].");
    return 0;
}