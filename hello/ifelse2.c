#include <stdio.h>
 
int main()
{
 int a;
 
 scanf("%d", &a);
 
if (a==2) // a�� ���� 2���
 printf("2�� �ԷµǾ����ϴ�.\n");
else if (a==3) // a�� 2�� �ƴ� 3�̶��
 printf("3�� �ԷµǾ����ϴ�.\n");
else // ���� ���ǵ��� ��� �������� �ʴ´ٸ�
 printf("2�� 3�� �ƴ� �ٸ� ���� �ԷµǾ����ϴ�.\n");
 
 return 0;
}
