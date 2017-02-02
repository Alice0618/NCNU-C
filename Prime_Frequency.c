#include <stdio.h>
int prime(int n) {
    int i;
    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n, i, j, k, add;
    char string[50];
    scanf("%d", &n);
    // char word[n];
    for(i = 0; i < n; i++) {
        scanf("%s", string);
        for(j = 0; j < 50; j++) {
            add = 0;
            for(k = j + 1; k < 50; k++) {
                if(string[j] == string[k]) {
                    add = add + 1;
                }
            }
        }
        printf("case:%d, add:%d\n", i+1, add);
        if(prime(add) == 1) {
            printf("%c\n", string[i]);
        } else {
            printf("empty\n");
        }
    }
}
