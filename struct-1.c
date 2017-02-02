#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student{
    int score;
    char name[20];
    char id[20];
};

// insertion sort
void sort(struct student *data[], int n) {
    int i, j;
    for(i = 1; i < n; i++) {
        // try to insert ith element
        // copy to temperatory x
        struct student *x;
        x = data[i];
        for(j = i - 1; j >= 0 && data[j]->score < x->score; j--) {
            data[j + 1] = data[j];
        }
        data[j + 1] = x;
    }
}

int main(int agrc, char *argv[]) {
    int i, n;
    scanf("%d", &n);
    struct student *im[n];
    for(i = 0; i < n; i++) {
        // malloc 為請記憶體配置一單位為 bite的空間
        // sizeof 中可放置任何型態，計算其大小
        im[i] = malloc(sizeof(struct student));
        scanf("%19s%19s%d", im[i]->name, im[i]->id, &im[i]->score);
    }
    // print out to check if read corrently
    for(i = 0; i < 0; i++) {
        // ->左邊放 pointer to structer
        // (*).等同於 ->
        printf("%s %s %d\n", (*im[i]).name, im[i]->id, im[i]->score);
    }
    sort(im, n);
    printf("after sort:\n");
    for(i = 0; i < n; i++) {
        printf("%s %s %d\n", im[i]->name, im[i]->id, im[i]->score);
    }
}
