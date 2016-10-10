#include <stdio.h>
int main() {
    int n, num, sum, average, add, tmp, i, j;
    for(;;) { // 無限迴圈
        scanf("%d", &n);
        int cube[n];
        if (n == 0) {
            break;
        } else if(n != 0) {
            sum = 0;
            for(i = 0; i < n; i++) {
                scanf("%d", &num);
                cube[i] = num;
                sum = sum + num;
            }
            average = sum / n;
            add = 0;
            for(i = 0; i < n; i++) {
                if(average >= cube[i]) {
                    tmp = average - cube[i];
                    add = add + tmp;
                }
            }
            printf("The minimum number of moves is %d.\n", add);
            printf("\n");
        }
    }
}
