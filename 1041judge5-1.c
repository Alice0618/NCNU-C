/*
阿扯和阿雷兩個人很喜歡去暨大的小 7 買一大堆東西回宿舍囤積，
暨大的小 7 對大家有買東西 9 折的優惠，而最近又推出了一個買兩罐任意飲料 88 折的活動讓他們很心動，
但是又覺得排隊等店員結帳完才開始掏錢會讓後面的人等很久，想要先算好價錢再去排隊，
可是數學又不太好常常會算錯，現在讓我們來寫一支程式來幫他們算算應該要掏多少錢出來排隊吧！

算出在小 7 買完東西總共應該要付的價錢，
小 7 對於打折的計算方法是打完折之後 5 捨 6 入，而且如果買的飲料是奇數瓶，那麼最貴的那一瓶不會被打折，
請對這些狀況作處理並輸出正確應該付的價錢。
*/

#include<stdio.h>
//排序
void sort(int input[],int n){
	int i,j,tmp;
	for(i=0; i<n; i++){
		tmp=input[i];
		for(j=i; j>=0; j--){
			if(input[j]>tmp){
				input[j+1]=input[j];
			}
			if(input[j]<tmp)
				break;
		}
		input[j+1]=tmp;
	}
}
int main(){
	//drink為飲料罐數，other為其他商品數量，othermoney,drinkmoney分別為其他物品總價及飲料總價，price為輸入其他物品用
	int drink,other,i,othermoney=0,drinkmoney=0,price;
	//5捨6入暫用值
	double tmp;
	printf("how many bottles of drink?\n");
	scanf("%d",&drink);
	printf("others?\n");
	scanf("%d",&other);
	printf("\n");
	//因為只有飲料會有發生沒湊到兩樣優惠有差別的問題 所以飲料使用一個陣列來排序價錢
	int drinkprice[drink];
	for(i=0; i<drink; i++){
		printf("%dth bottle of drink's price ",i+1);
		scanf("%d",&drinkprice[i]);
	}
	sort(drinkprice,drink);
	printf("\n");

	//算出其他物品的總價
	for(i=0; i<other; i++){
		printf("%dth stuff's price ",i+1);
		scanf("%d",&price);
		othermoney=othermoney+price;
	}
	tmp=othermoney*0.9;
	othermoney=(int)(tmp+0.4);
	//算飲料價錢
	if(drink%2==0){
		for(i=0; i<drink; i++){
			drinkmoney+=drinkprice[i];
		}
		tmp=drinkmoney*0.88;
		drinkmoney=(int)(tmp+0.4);
	}else{
		for(i=0; i<drink-1; i++){
			drinkmoney+=drinkprice[i];
		}
		tmp=drinkmoney*0.88+drinkprice[i]*0.9;
		drinkmoney=(int)(tmp+0.4);
	}
	printf("\ndrinkmoney: %d",drinkmoney);
    printf("\nothermoney: %d",othermoney);
    printf("\ntotal: %d\n",drinkmoney+othermoney);
}
