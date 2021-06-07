#include <stdio.h>
int main(void)
{
double a, b, result;
char sym;
while(1){
printf("入力してください  fで終了\n");
if( scanf("%lf %c %lf", &a,&sym,&b)!=3)break;
switch( sym ){
case '+' : result = a + b; break;
case '-' : result = a - b; break;
case '*' : result = a * b; break;
case '/' : result = a / b; break;
}
printf("===%g\n", result);
}
return 0;
}
