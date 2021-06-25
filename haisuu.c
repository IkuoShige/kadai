#include <stdio.h>
int main(void){
int data[]={};
int i;
int answer; 
while(1){
printf("入力してください\n");
answer=0;
i=i++;
scanf("%d",&data[i]);
answer+=data[i];
printf("%d\n",answer);
printf("終了しますか？\nyes or no\n");
while(getchar() != '\n'){
puts("終了したい場合はエンターキーを押してください");
}
}
/*
for(i=0;i<10;i++){
scanf("%d",&data[i]);
answer+=data[i];
}

printf("%d\n",answer);
エンターキーで終了にさせる
*/
return (0);
}

