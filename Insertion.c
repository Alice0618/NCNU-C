#include <stdio.h>
int main() {
    int n, i, j, tmp;
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
        for(i = 1; i < n; i++) {
            tmp = num[i];
            j = i - 1;
            while(j > -1 && tmp < num[j]) {
                num[j + 1] = num[j];
                j--;
            }
            num[j + 1] = tmp;
            for (j = 0 ; j < n ; j++ ) {
                printf("%d ", num[j]);
                fprintf(foutput, "%d ", num[j]);
            }
            printf("\n");
            fprintf(foutput, "\n");
        }
    }
    // 關閉檔案
    fclose(finput);
    fclose(foutput);
}
