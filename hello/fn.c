#include <stdio.h>

int sum(int a, int b); 

int main5()
{
    int a, b;
 
    scanf("%d%d", &a, &b);
    printf("aÀÇ °ª: %d\n", sum(a, b));
    return 0;
}

int sum(int a, int b) {
    return a + b;
}
 

