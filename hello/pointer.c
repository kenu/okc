#include <stdio.h>
 
int main()
{
    int num, num1, num2;
     
    num=50;
    num1=72;
    num2=94;
    printf("num의 값: %d\n", num);
    printf("num의 저장 위치: %#x\n", &num);
    printf("num1의 저장 위치: %#x\n", &num1);
    printf("num2의 저장 위치: %#x\n", &num2);
    return 0;
}
