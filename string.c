#include <stdio.h>
int main() {
    // char triangle[20] = "triangle";
    char triangle[5];
    int char_num[5];
    scanf("%s", triangle);
    int i;
    for (i = 0; i < 5; i++) {
        char_num[i] = triangle[i];
        printf("char: %c, int: %d\n", triangle[i], char_num[i]);
    }
    printf("%s\n", triangle);
}
