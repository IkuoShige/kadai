#include<stdio.h>
int main(void){
    int a,b,c,num=0;
    printf("入力してください\n");
    scanf("%d",&num);
    a=num%3;
    b=num%5;
    c=num%15;
    if(c==0){
        printf("3と5の公倍数です\n");
    }
    else if(a==0){
        printf("3の倍数です\n");
    }
    else if(b==0){
        printf("5の倍数です\n");
    }
    else{
        printf("その他\n");
    }
return 0;
}
