#include<stdio.h>
//座標を読み取る　反映　ループ　9回繰り返す　勝利判定 set show turn judge
char a[3][3];
void set(int yoko, int tate,char a[yoko][tate],char s);
void show(int yoko, int tate,char a[yoko][tate]);
int turn(int yoko,int tate,char a[yoko][tate],char s);
int judge(int yoko,int tate,char a[yoko][tate],char s);
int i=0,j=0,yoko=3,tate=3;
int main(void){
    set(yoko,tate,a,'-');
    show(yoko,tate,a);
    while(1){
        if(turn(yoko,tate,a,'o')!=0&&turn(yoko,tate,a,'o')!=1){
            show(yoko,tate,a);
            }
            show(yoko,tate,a);
        if(judge(yoko,tate,a,'o')!=0){
                break;
            }
        if(turn(yoko,tate,a,'x')!=0&&turn(yoko,tate,a,'x')!=1){
            show(yoko,tate,a);
        }
        show(yoko,tate,a);
        if(judge(yoko,tate,a,'x')!=0){
                break;
            }
        }
        if(judge(yoko,tate,a,'o')==1){
            printf("oの勝ち\n");
        }if(judge(yoko,tate,a,'x')==1){
            printf("xの勝ち\n");
        }if(judge(yoko,tate,a,'o')==2){
            printf("引き分け\n");
        }
return 0;
}
void set(int yoko, int tate, char a[yoko][tate],char s){
    for(int i=0;i<yoko;i++){
        for(int j=0;j<tate;j++){
            a[i][j]=s;
        }
    }
    return ;
}
void show(int yoko,int tate,char a[yoko][tate]){
    printf(" ");
    for(i=0;i<yoko;i++){
    printf(" %d",i);
    }
    printf("\n");
    for(i=0;i<yoko;i++){
        printf("%d",i);
        for(j=0;j<tate;j++){
            printf(" %lc",a[i][j]);
        }
        printf("\n");
    }
return ;
}
int turn(int yoko, int tate, char a[yoko][tate],char s){
    int b,c;
    printf("%cの番です\n",s);
    printf("入力してください\n");
    scanf("%d %d",&b,&c);
    if(a[b][c]!='-'){
        printf("入力されています\n");
        return 1;
    }
    a[b][c]=s;
    return 0;
}
int judge(int yoko,int tate,char a[yoko][tate],char s){
    //tate
    for(j=0;j<tate;j++){
        for(i=0;i<yoko;i++){
            if(a[i][j]!=s){
                break;
            }
            if(i==yoko-1){
                return 1;
            }
        }
    }
    //yoko
    for(i=0;i<yoko;i++){
        for(j=0;j<tate;j++){
            if(a[i][j]!=s){
                break;
            }
            if(j==tate-1){
                return 1;
            }
        }
    }
    //maginaname
    for(i=0;i<yoko;i++){
        if(a[i][i]!=s){
            break;
        }
        if(i==yoko-1){
            return 1;
        }
    }
    //hidarinaname
    for(i=0;i<yoko;i++){
        if(a[i][yoko-1-i]!=s){
            break;
        }
        if(i==yoko-1){
            return 1;
        }
    }
    for(i=0;i<yoko;i++){
        for(j=0;j<tate;j++){
            if(a[i][j]=='-'){
                return 0;
            }
        }
    }
    return 2;
}