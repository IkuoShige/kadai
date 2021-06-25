/*3つの引数(整数)の平均値を返す関数を作成(引数あり)3つの引数と戻り値を表示すること*/
#include<stdio.h>
int scan_int(void){
	int temp;
	printf("整数値:");
	scanf("%d",&temp);
	return temp;
}
double ave_of(double a,double b,double c){
	return (a+b+c)/3;
}
int main(void){
	int a=scan_int();
	int b=scan_int();
	int c=scan_int();
	double ave=ave_of(a,b,c);
	printf("平均値:%g\n" ,ave);
return (0);
}

