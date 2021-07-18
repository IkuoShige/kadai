#include<stdio.h>
//座標を読み取る　反映　ループ　9回繰り返す　勝利判定
char a[3][3];
int i=0,j=0,row=3,col=3;
void set(int row,int col, char a[][col], char ch);
void show(int row,int col, char a[][col]);
int turn(int row,int col, char a[][col],char ch);
int judge(int row,int col, char a[][col],char ch);
int main(void){
    set(row,col,a,'-');
    show(row,col,a);
    while(1){
        while (turn(row,col,a,'o')){
            show(row,col,a);        
        }
        show(row,col,a);
        if (judge(row,col,a,'o')!=0){
            break;
        }
        while (turn(row,col,a,'x')){
            show(row,col,a);        
        }
        show(row,col,a);
        if (judge(row,col,a,'x')!=0){
            break;
        }
    }
    while(judge(row,col,a,'o')==1){
        printf("oの勝ち\n");break;
    }while(judge(row,col,a,'x')==1){
        printf("Xの勝ち\n");break;
    }while(judge(row,col,a,'o')==2) {
        printf("引き分け\n");break;
    }
return (0);
}
void set(int row,int col, char a[][col], char ch){
    int i=0,j=0;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            a[i][j]=ch;
        }
    }
return ;
}
void show(int row,int col, char a[][col]){
    int i=0,j=0;
    printf(" ");
    for (j = 0; j < col; j++){
    printf(" %d",j);
    }
    printf("\n");
        for(i=0;i<row;i++){
        printf("%c",i+65);
        for(j=0;j<col;j++){
            printf(" %c",a[i][j]);
        }
    printf("\n");
    }
    return ;
}
int turn(int row,int col, char a[][col],char ch){
    printf("%cの番\n",ch);
    printf("座標をいれて\n");
    int c=0,b=0;
    scanf("%lc %d",&b,&c);
    a-=65;
    if(a[b][c]!='-'){
        printf("入力されています\n");
        return 1;
    }
    a[b][c]=ch;
    return 0;
}
int judge(int row,int col,char a[][col],char ch){
    int i=0,j=0;
    for(j=0;j<col;j++){
        for(i=0;i<row;i++){
            if(a[i][j]!=ch){
                break;
            }
            if(i==2){
                return 1;
            }
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(a[i][j]!=ch){
                break;
            }
            if(j==2){
                return 1;
            }
        }
    }
    for(i=0;i<row;i++){/*ななめ*/
        if(a[i][i]!=ch){
            break;
        }
        if(i==2){
            return 1;
        }
    }
    for(i=0;i<row;i++){
        if(a[i][2-i]!=ch){
            break;
        }
        if(i==2){
            return 1;
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(a[i][j]=='-'){
                return 0;
            }
        }
    }
    
    return 2;
}