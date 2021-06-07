#include <stdio.h>
int main(void)
{
int num, a, b, c;
printf("入力してください\n");
scanf("%d", &num);
a=num%3;
b=num%5;
c=num%15;
if(c==0){
printf("FizzBuzz\n");
}
else if(a==0){
printf("Fizz\n");
}
else if(b==0){
printf("Buzz\n");
}
else{
printf("その他\n");
}
return 0;
}

