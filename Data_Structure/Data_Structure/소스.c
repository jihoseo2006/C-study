//1학년 1학기 수요일 방과후(슬림한 자료구조) 수업코드
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void hanoi_tower(int n, char from, char tmp, char to) {
	if (n == 1) {
		printf("원반1을 %c에서 %c로 이동\n", from, to);
	}
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		printf("원반 %d 를 %c에서 %c로 이동",n,from,to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}

int main() {
	hanoi_tower(3, 'a', 'b', 'c');
	return 0;
}