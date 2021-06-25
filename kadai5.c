#include <stdio.h>
int main(void){
int data[10]={};
int i;
int answer;
printf("入力してください\n");
answer=0;
for(i=0;i<10;i++){
scanf("%d",&data[i]);
answer+=data[i];}
printf("%d\n",answer);
return (0);
}
