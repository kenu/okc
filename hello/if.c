#include <stdio.h>
 
int main1()
{
 int a, b;
 
 scanf("%d %d", &a, &b);
 if (a<b)
  printf("b�� a���� Ů�ϴ�.\n");
 if (a>b)
  printf("a�� b���� Ů�ϴ�.\n"); 
 if (a==b)
  printf("a�� b�� �����ϴ�.\n");
 if (a!=b)
  printf("a�� b�� ���� �ʽ��ϴ�.\n");
 if (a<=b)
  printf("a�� b���� �۰ų� �����ϴ�.\n");
 if (a>=b)
  printf("a�� b���� ũ�ų� �����ϴ�.\n");
 
 return 0;
}

