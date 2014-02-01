#include <stdio.h>
 
int main1()
{
 int a, b;
 
 scanf("%d %d", &a, &b);
 if (a<b)
  printf("b가 a보다 큽니다.\n");
 if (a>b)
  printf("a가 b보다 큽니다.\n"); 
 if (a==b)
  printf("a와 b가 같습니다.\n");
 if (a!=b)
  printf("a와 b가 같지 않습니다.\n");
 if (a<=b)
  printf("a가 b보다 작거나 같습니다.\n");
 if (a>=b)
  printf("a가 b보다 크거나 같습니다.\n");
 
 return 0;
}

