#include <stdio.h>
int main() {
    int n, i, j, position, tmp;
    FILE *finput, *foutput;
    // 開啟檔案及權限
    finput = fopen("data.txt", "rt");
    foutput = fopen("output.txt", "w+t");

    if (finput && foutput) {
        fscanf(finput, "%d", &n);
        int num[n];
        for (i = 0; i < n; i++) {
            fscanf(finput, "%d", &num[i]);
        }
        for (i = 0 ; i < n - 1; i++) {
            position = i;
            for (j = i + 1 ; j < n ; j++) {
                if (num[position] > num[j]){
                    position = j;
                }
            }
            // 如果 position 有被修改再做互換
            if (position != i){
                tmp = num[i];
                num[i] = num[position];
                num[position] = tmp;
            }
            for (j = 0 ; j < n ; j++ ) {
                printf("%d ", num[j]);
                fprintf(foutput, "%d ", num[j]);
            }
            printf("\n");
            fprintf(foutput, "\n");
        }
        // 關閉檔案
        fclose(finput);
        fclose(foutput);
    }
}
