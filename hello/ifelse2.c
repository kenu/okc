#include <stdio.h>
 
int main()
{
 int a;
 
 scanf("%d", &a);
 
if (a==2) // a가 만약 2라면
 printf("2가 입력되었습니다.\n");
else if (a==3) // a가 2가 아닌 3이라면
 printf("3이 입력되었습니다.\n");
else // 위의 조건들을 모두 만족하지 않는다면
 printf("2와 3이 아닌 다른 수가 입력되었습니다.\n");
 
 return 0;
}
