#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, j, num[38], tmp;
    for(i = 0; i < 38; i++) {
        num[i] = i + 1;
    }

    for(i = 0; i < 38; i++) {
        j = rand() % 38 + 1;
        tmp = num[i];
        num[i] = num[j];
        num[j] = tmp;
    }

    for(i = 0; i < 6; i++) {
        for(j = i + 1; j < 6; j++) {
            if(num[i] > num[j]) {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }
    for(i = 0; i < 6; i++) {
        printf("%02d ", num[i]);
    }
    printf("\n");
}
