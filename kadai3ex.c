#include<stdio.h>
/*10人のランダムに出てくる成績(50~100)を90以上：S　90~80：A　80~70：B　70~60：C　60未満：不合格と判断し表示するプログラムを作成しなさい。
 * C言語で乱数を扱う方法（rand関数とsrand関数 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
	int score[10];
	int i,ransu1,ransu2;
	srand((unsigned)time(NULL));
	for(i=0;i<10;i++){
		ransu1=rand()%51;
		ransu2=ransu1+50;
		score[i]=ransu2;
		printf("%d",score[i]);
		if(score[i]>89){printf(" S\n");}
		else if(score[i]>79 && score[i]<91){printf(" A\n");}
		else if(score[i]>69 && score[i]<81){printf(" B\n");}
		else if(score[i]>59 && score[i]<71){printf(" C\n");}
		else if(score[i]<60){printf(" 不合格\n");}
	}
	

	return(0);
}
