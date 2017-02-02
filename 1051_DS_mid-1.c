#include <stdio.h>
#include <stdlib.h>

struct person
{
    char * name;
    int math;
    int pro;
    float sum;
};

int main() {
    FILE *fr, *fw;
    int i, n, math, programming, j;
    char **allname;
    fr = fopen("input.txt", "r");
    if (fr == NULL) {
        printf("not thing to read");
    } else {
        fw = fopen("104213018_蔣青嵐.txt", "w");
        fscanf(fr, "%d", &n);
        struct person grade[n];
        //讀檔
        for (i = 0; i < n; i++) {
            fscanf(fr, "%s", *allname);
            grade[i].name = *allname;
            allname++;
        }
        for (i = 0; i < n; i++) {
            fscanf(fr, "%d", &math);
            grade[i].math = math;
            if(grade[i].math > 100) {
                grade[i].math = 99;
            }
            if(grade[i].math < 0) {
                grade[i].math = 30;
            }
        }
        for (i = 0; i < n; i++) {
            fscanf(fr, "%d", &programming);
            grade[i].pro = programming;
            if(grade[i].pro > 100) {
                grade[i].pro = 99;
            }
            if(grade[i].pro < 0) {
                grade[i].pro = 30;
            }
        }
        for (i = 0; i < n; i++) {
            grade[i].sum = (grade[i].math + grade[i].pro);
        }

        //原始資料
        fprintf(fw, "original data:.........\n");
        for (i = 0; i < n; i++) {
            fprintf(fw, "%s (math:%2d programming:%2d average:%3d)\n", grade[i].name, grade[i].math, grade[i].pro, grade[i].sum/10);
        }
        fprintf(fw, "\n");

        // selection sort
        for(i = 0; i < n - 1; i++) {
            int m = i;
            //找出最小值
            for(j = i + 1; j < n; j++) {
                if(grade[j].sum < grade[m].sum)
                    m = j;
            }
            //與最前面一筆(未排序)的交換
            char *temp_n;
            if(i != m) {
                int temp = grade[i].sum;
                grade[i].sum = grade[m].sum;
                grade[m].sum = temp;

                temp_n = grade[i].name;
                grade[i].name = grade[m].name;
                grade[m].name = temp_n;

            }
            fprintf(fw, "round %d:\n", i + 1);
            for (j = 0; j < n; j++) {
                fprintf(fw, "%s(%d) ", grade[j].name, grade[j].sum/10);
            }
            fprintf(fw,"\n\n");
        }
    }
    fclose(fr);
    fclose(fw);
}
