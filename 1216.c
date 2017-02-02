#include <stdio.h>
int main(int agrc, char *argv[]) {
    int i;
    for(i = 0; i < agrc; i++) {
        printf("%s\n", argv[i]);
    }
    for(i = 0; i < agrc; i++) {
        printf("%c\n", *argv[i]);
    }
}
