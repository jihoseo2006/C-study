//1�г� 1�б� ������ �����(������ �ڷᱸ��) �����ڵ�
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void hanoi_tower(int n, char from, char tmp, char to) {
	if (n == 1) {
		printf("����1�� %c���� %c�� �̵�\n", from, to);
	}
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		printf("���� %d �� %c���� %c�� �̵�",n,from,to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}

int main() {
	hanoi_tower(3, 'a', 'b', 'c');
	return 0;
}