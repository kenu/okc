#include <stdio.h>
 
int main()
{
    int num, num1, num2;
     
    num=50;
    num1=72;
    num2=94;
    printf("num�� ��: %d\n", num);
    printf("num�� ���� ��ġ: %#x\n", &num);
    printf("num1�� ���� ��ġ: %#x\n", &num1);
    printf("num2�� ���� ��ġ: %#x\n", &num2);
    return 0;
}
