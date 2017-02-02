#include <stdio.h>
struct Personal {
    char name[100];
    int math;
    int pro;
    float total;
};
int main(){
    FILE *input, *outfile;
    input = fopen("input.txt","r");
    outfile = fopen("104213018_蔣青嵐.txt", "w");
    int n,i,j;
    fscanf(input,"%d",&n);
    struct Personal data[n];
    for(i = 0; i < n; i++){
        fscanf(input,"%s",&data[i].name);
    }
    for(i = 0; i < n; i++){
        fscanf(input,"%d",&data[i].math);
        if(data[i].math > 100) {
            data[i].math = 99;
        }
        if(data[i].math < 0) {
            data[i].math = 30;
        }
    }
    for(i = 0; i < n; i++){
        fscanf(input,"%d",&data[i].pro);
        if(data[i].pro > 100) {
            data[i].pro = 99;
        }
        if(data[i].pro < 0) {
            data[i].pro = 30;
        }
    }
    for(i = 0; i < n; i++){
        data[i].total=data[i].math+data[i].pro;
    }
    printf("original data:...................\n");
    fprintf(outfile,"raw data：...................\n");
    for(i = 0; i < n; i++){
        printf("%s(math:%d program:%d average:%f) \n", data[i].name,data[i].math,data[i].pro,data[i].total/2);
        fprintf(outfile,"%s(math:%d program:%d average:%f) \n",data[i].name,data[i].math,data[i].pro,data[i].total/2);
    }
    printf("\n");
    fprintf(outfile,"\n");

    int num[n];
    for(i = 0; i < n; i++){
        num[i] = i;
    }
    // selection sort
    for(i = 0; i < n - 1; i++) {
        int position = i;
        //找出最小值
        for(j = i + 1; j < n; j++) {
            if(data[j].total < data[position].total)
                position = j;
        }
        //與最前面一筆(未排序)的交換
        char tmp1;
        if(i != position) {
            int tmp = data[i].total;
            data[i].total = data[position].total;
            data[position].total = tmp;
        }
        for (j = 0; j < n; j++) {
            printf("%s %f ",data[num[j]].name,data[j].total/2);
            fprintf(outfile,"%s %f ",data[num[j]].name,data[j].total/2);
        }
        printf("\n");
        fprintf(outfile, "\n");
    }
    fclose(input);
    fclose(outfile);
}
