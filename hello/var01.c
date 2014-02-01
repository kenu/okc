#include <stdio.h>
 
void func1()
{
    static int a = 6;
    a = a + 1;
    printf("a: %d\n", a);
}
int main2()
{
    func();
    func();
    func();
    return 0;
}
