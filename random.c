#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    for(i = 1; i <= 10; i++) {
        n = rand() % 10 + 1;
        printf("%d ", n);
    }
    printf("\n");
}
