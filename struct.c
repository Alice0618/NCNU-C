#include <stdio.h>
#include <string.h>
struct student{
    int score;
    char name[20];
    char id[20];
};

// insertion sort
void sort(struct student data[], int n) {
    int i, j;
    for(i = 1; i < n; i++) {
        // try to insert ith element
        // copy to temperatory x
        struct student x;
        x.score = data[i].score;
        strcpy(x.name, data[i].name);
        strcpy(x.id, data[i].id);
        for(j = i - 1; j >= 0 && data[j].score < x.score; j--) {
            data[j + 1].score = data[j].score;
            strcpy(data[j + 1].name, data[j].name);
            strcpy(data[j + 1].id, data[j].id);
        }
        data[j + 1].score = x.score;
        strcpy(data[j + 1].name, x.name);
        strcpy(data[j + 1].id, x.id);
    }
}

int main(int agrc, char *argv[]) {
    int i, n;
    scanf("%d", &n);
    struct student im[n];
    for(i = 0; i < n; i++) {
        scanf("%19s%19s%d", im[i].name, im[i].id, &im[i].score);
    }
    // print out to check if read corrently
    for(i = 0; i < 0; i++) {
        printf("%s %s %d\n", im[i].name, im[i].id, im[i].score);
    }
    sort(im, n);
    printf("after sort:\n");
    for(i = 0; i < n; i++) {
        printf("%s %s %d\n", im[i].name, im[i].id, im[i].score);
    }
}
