#include <stdio.h>
int main() {
    // char triangle[20] = "triangle";
    char triangle[20];
    int char_num[20];
    scanf("%s", triangle);
    int i;
    for (i = 0; i < 20; i++) {
        char_num[i] = triangle[i];
        printf("char: %c, int: %d\n", triangle[i], char_num[i]);
    }
    printf("%s\n", triangle);
}
