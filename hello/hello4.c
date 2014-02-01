#include <stdio.h>
 
int main5()
{
    int num1 = 1234;
    float num2 = 12.34f;
 
    printf("%8d\n", num1);
    printf("%-8d\n", num1);
    printf("%+8d\n", num1);
    printf("%08d\n", num1);
    printf("%+08d\n", num1);
    printf("%8.1f\n", num2);
    printf("%-8.1f\n", num2);
    printf("%+8.1f\n", num2);
    printf("%08.1f\n", num2);
    printf("%+08.1f\n", num2);
 
    return 0;
}
