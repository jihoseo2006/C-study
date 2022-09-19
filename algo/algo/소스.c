#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>//문제 1000번
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}

//#include<stdio.h>//문제 1001번
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a - b);
//	return 0;
//}

//#include<stdio.h>//2908번
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

//#include<stdio.h>//10718번
//int main() {
//	printf("강한친구 대한육군\n");
//	printf("강한친구 대한육군\n");
//	return 0;
//}

//#include<stdio.h>//10998번 문제 정답
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a * b);
//	return 0;
//}

//#include <stdio.h>//10869번
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

//#include <stdio.h>//18108번
//int main() {
//	int y;
//	scanf("%d", &y);
//	printf("%d", y - 543);
//	return 0;
//}

//#include<stdio.h>//10430번
//int main() {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d\n", (a + b) % c);
//	printf("%d\n", ((a%c) + (b%c))%c);
//	printf("%d\n", (a * b) % c);
//	printf("%d\n", ((a % c)* (b%c)) % c);
//	return 0;
//}

//#include<stdio.h>//1330번
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

//#include<stdio.h>//9498번
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

//#include<stdio.h>//2753번
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

//#include<stdio.h>//14681번
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

//#include<stdio.h>//2739번
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= 9; i++) {
//		printf("%d * %d = %d\n", n, i, n * i);
//	}
//	return 0;
//}

//#include<stdio.h>//10950
//int main() {
//	int a[100], b[100], c;
//	scanf("%d", &c);
//	for (int i = 0; i < c; i++) {
//		scanf("%d %d", &a[i], &b[i]);
//	}
//	for (int i = 0; i < c; i++) {
//		printf("%d\n", a[i]+b[i]);
//	}
//	return 0;
//}

//#include<stdio.h>//8893번
//int main() {
//	int n, b = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		b += i;
//	}
//	printf("%d", b);
//	return 0;
//}

//#include<stdio.h>//15552번
//int main() {
//	int a[1000000] = { 0 }, b[1000000] = { 0 };
//	int c;
//	scanf("%d", &c);
//	for (int i = 0; i < c; i++) {
//		scanf("%d %d", &a[i], &b[i]);
//	}
//	for (int i = 0; i < c; i++) {
//		printf("%d\n",a[i]+b[i]);
//	}
//}

//#include<stdio.h>//11021번
//int main() {
//	int a[100] = { 0 }, b[100] = { 0 };
//	int c;
//	scanf("%d", &c);
//	for (int i = 0; i < c; i++) {
//		scanf("%d %d", &a[i], &b[i]);
//	}
//	for (int i = 0; i < c; i++) {
//		printf("Case #%d: %d\n", i+1, a[i] + b[i]);
//	}
//	return 0;
//}

//#include<stdio.h>//11022번
//int main() {
//	int a[100] = { 0 }, b[100] = { 0 };
//	int c;
//	scanf("%d", &c);
//	for (int i = 0; i < c; i++) {
//		scanf("%d %d", &a[i], &b[i]);
//	}
//	for (int i = 0; i < c; i++) {
//		printf("Case #%d: %d + %d = %d\n", i + 1, a[i], b[i], a[i] + b[i]);
//	}
//	return 0;
//}

//#include<stdio.h>//2438번
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++) {
//		for (int j = 0; j < i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>//2439번 미완성
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		for (int j = n-1; j > 0; j--) {
//			printf(" ");
//		}
//		for (int k = 0; k <= i; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

