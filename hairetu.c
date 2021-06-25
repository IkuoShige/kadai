#include<stdio.h>
int main (void){
int data[]={};
int answer=0;
int i;
printf("入力してください\n");
for(i=0;i<10;i++){
    scanf("%d\n",&data[i]);
    answer+=data[i];
}
printf("%d\n",answer);
return (0);
}

