#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>//���� 1000��
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}

//#include<stdio.h>//���� 1001��
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a - b);
//	return 0;
//}

//#include<stdio.h>//2908��
//int main() {
//	int a, b;
//	int a1, a2, a3,a4, b1, b2, b3,b4;
//	scanf("%d %d", &a, &b);
//	a1 = a / 100;
//	a2 = a / 10 % 10;
//	a3 = a % 100 %10;
//	b1 = b / 100;
//	b2 = b / 10 % 10;
//	b3 = b % 100 % 10;
//	a4 = (a3 * 100) + (a2 * 10) + a1;
//	b4 = (b3 * 100) + (b2 * 10) + b1;
//	if (a4 > b4) {
//		printf("%d", a4);
//	}
//	else
//	{
//		printf("%d", b4);
//	}
//	return 0;
//}

//#include<stdio.h>//10718��
//int main() {
//	printf("����ģ�� ��������\n");
//	printf("����ģ�� ��������\n");
//	return 0;
//}

//#include<stdio.h>//10998�� ���� ����
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a * b);
//	return 0;
//}

//#include <stdio.h>//10869��
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a + b);
//	printf("%d\n", a - b);
//	printf("%d\n", a * b);
//	printf("%d\n", a / b);
//	printf("%d\n", a % b);
//
//	return 0;
//}

//#include <stdio.h>//18108��
//int main() {
//	int y;
//	scanf("%d", &y);
//	printf("%d", y - 543);
//	return 0;
//}

//#include<stdio.h>//10430��
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d\n", (a + b) % c);
//	printf("%d\n", ((a%c) + (b%c))%c);
//	printf("%d\n", (a * b) % c);
//	printf("%d\n", ((a % c)* (b%c)) % c);
//	return 0;
//}

//#include<stdio.h>//1330��
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a > b) {
//		printf(">");
//	}
//	if (a < b) {
//		printf("<");
//	}
//	if (a == b) {
//		printf("==");
//	}
//	return 0;
//}

//#include<stdio.h>//9498��
//int main() {
//	int a;
//	scanf("%d", &a);
//	if (a >= 90) {
//		printf("A");
//	}
//	else if (a >= 80) {
//		printf("B");
//	}
//	else if (a >= 70) {
//		printf("C");
//	}
//	else if (a >= 60) {
//		printf("D");
//	}
//	else{
//		printf("F");
//	}
//	return 0;
//}

//#include<stdio.h>//2753��
//int main() {
//	int y;
//	scanf("%d", &y);
//	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
//		printf("1");
//	}
//	else {
//		printf("0");
//	}
//	return 0;
//}

//#include<stdio.h>//14681��
//int main() {
//	int x, y;
//	scanf("%d\n%d", &x, &y);
//	if (x > 0 && y > 0) {
//		printf("1");
//	}
//	if (x < 0 && y > 0) {
//		printf("2");
//	}
//	if (x < 0 && y < 0) {
//		printf("3");
//	}
//	if (x > 0 && y < 0) {
//		printf("4");
//	}
//	return 0;
//}

#include<stdio.h>//2739��
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}
	return 0;
}