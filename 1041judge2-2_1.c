/*
瑩瑩上個月很喜歡用鈔票來買東西，導致他這個月身上只剩下一大堆笨重的硬幣可用。
困擾的瑩瑩為了不要讓包包這麼重，他希望之後的每次付錢，都能夠有效率的幫他減輕重量(Hint: 付出去最多的硬幣)。
然而瑩瑩因為已經不想要再收到更多的硬幣，因此只願意買價格「剛好」可以用身上硬幣解決的東西，需要找錢的就算了。
超級懶的瑩瑩又不希望每次付錢時都要算硬幣數量。
所以他需要同學們幫他寫個程式，只要給程式東西的價錢，還有身上硬幣的數量，程式就會告訴瑩瑩要怎麼付錢。

硬幣有分 $50 、 $10 、 $5 、 $1。

1.輸入要買的東西的價錢
2.輸入目前身上每種硬幣的數量，依序為$50, $10, $5, $1
3.物品價格無法被剛好付出，或是價格超過現金時，告訴瑩瑩「沒有錢可以付。」
4.如果可以付的話，輸出每種硬幣應付幾個，以及他們的重量。 重量分別是: $50: 10g 、 $10: 7.5g 、 $5 : 4.4g 、 $1 : 3.8g (g:克)
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct coin {
    int n;
    int * value;
    double * weight;
    int * available; // 每種硬幣的個數
    int * number; // 現在我選了幾個硬幣
    int * maxNumber; // 這個過程中，目前最大的組合
    double max; // 最大重量
};

void init (struct coin * x, int n, int *v, double *w, int *a) {
    int i;
    x->n = n;
    x->value = (int *)malloc(sizeof(int) * n);
    x->weight = (double *)malloc(sizeof(double) * n);
    x->available = (int *)malloc(sizeof(int) * n);
    x->number = (int *)malloc(sizeof(int) * n);
    x->maxNumber = (int *)malloc(sizeof(int) * n);
    x->max = 0;

    for(i = 0; i< n ; i++) {
        x->value[i] = v[i];
        x->weight[i] = w[i];
        x->available[i] = a[i];
        x->number[i] = 0;
    }
}

void findSolution( struct coin * x, int target, int from ) {
    int i;
    if( x->n <= from ) {
        if( target == 0 ) { // found a solution
            // check if this solution has max weight
            double w = 0;
            for( i  = 0 ; i < x->n ; i++ ) {
                w += x->weight[i] * x->number[i];
            }
            if( w > x->max ) {
                x->max = w;
                for( i = 0 ; i < x->n ; i++ ){
                    x->maxNumber[i] = x->number[i];
                }
            }
        }
        return;
    }

    // choose coin from "from" position
    for( i = 0 ; i <= x->available[from] ; i++ ){
        // choose i coin form "from" position
        x->number[from] = i;
        findSolution(x, target - x->value[from] * i, from + 1);
    }
}

int main() {
    double w[] = {10, 7.5, 4.4, 3.8};
    int v[] = {50, 10, 5, 1};
    int a[4];
    int target, i;
    struct coin x;
    scanf("%d", &target);
    for(i = 0 ; i < 4 ; i++) {
        scanf("%d", a+i);
    }
    init(&x, 4, v, w, a);
    findSolution(&x, target, 0);
    printf("%lf %d %d %d %d\n", x.max, x.maxNumber[0], x.maxNumber[1], x.maxNumber[2], x.maxNumber[3]);
}
