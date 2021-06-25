/*配列を2個スカイそれぞれの0番目、1番目、2番目の要素を足し算する*/
#include<stdio.h>
int main(void){
int a1[3]={};
int a2[3]={};
int i,sum;
printf("6個入力してください");
for(i=0;i<3;i++){
	scanf("%d",&a1[i]);
}
for(i=0;i<3;i++){
	scanf("%d",&a2[i]);
}
for(i=0;i<3;i++){
	sum=a1[i]+a2[i];
	printf("%d\n",sum);
}
return (0);
}
