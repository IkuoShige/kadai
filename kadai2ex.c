/*九九の表(2重forで)*/
#include<stdio.h>

int main(void){
    int i,j;
    printf("   |");
    for(i=1;i<10;i++)
        printf("%3d",i);
    putchar('\n');
    puts("---+----------------------------");
    for(i=1;i<10;i++){
        printf(" %d |",i);
        for(j=1;j<10;j++)
        printf("%3d",i*j);
    putchar('\n');
    }
return (0);
}
