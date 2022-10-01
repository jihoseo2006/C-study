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

//#include<stdio.h>//11654번
//int main() {
//	char a;
//	scanf("%c", &a);
//	printf("%d", a);
//	return 0;
//}

//#include <stdio.h>//10871번 정답
//int main() {
//	int ary[10000]={0};
//	int conary[10000]={0};
//	int count = 0;
//	int n1, n2;
//	scanf("%d %d", &n1, &n2);
//	for (int i = 0; i < n1; i++) {
//		scanf("%d", &ary[i]);
//		if (ary[i] < n2) {
//			conary[count] = ary[i];
//			count++;
//		}
//	}
//	for (int j = 0; j < count; j++) {
//		printf("%d ", conary[j]);
//	}
//	return 0;
//}

//#include<stdio.h>//2258번
//int main() {
//	int a, b;
//	scanf("%d\n%d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}

//#include<stdio.h>//11382번
//int main() {
//	long long a, b, c;
//	scanf("%lld %lld %lld", &a, &b, &c);
//	printf("%lld", a + b + c);
//	return 0;
//}

//#include<stdio.h>//2442번
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++) {
//		for (int k = a-i; k>0; k--) {
//			printf(" ");
//		}
//		for (int j = 1;  j <=2 * i - 1; j++) {
//			printf("*");
//		}
//
//		printf("\n");
//	}
//} 

//#include<stdio.h>//9316번
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++) {
//		printf("Hello World, Judge %d!\n", i);
//	}
//	return 0;
//}

//#include<stdio.h>//2741번
//int main() {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++) {
//		printf("%d\n", i);
//	}
//	return 0;
//}

//#include<stdio.h>//4401번
//int main() {
//	int ary1[100] = { 0 };
//	int ary2[100] = { 0 };
//	int i = 0;
//	int a, b;
//	while (1)
//	{
//		scanf("%d %d", &a, &b);
//		if ((a == 0 && b == 0)) break;
//		ary1[i] = a;
//		ary2[i] = b;
//		i++;
//	}
//
//	for (int j = 0; j < i; j++) {
//		if (ary1[j] > ary2[j]) {
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>//10952번
//int main() {
//	int ary1[100] = {0};
//	int ary2[100] = {0};
//	int cnt=0;
//	for (int i = 0; ; i++) {
//		scanf("%d %d", &ary1[i], &ary2[i]);
//		if (ary1[i] == 0 && ary2[i] == 0) break;
//		cnt++;
//	}
//	
//	for (int i = 0; i < cnt; i++) {
//		printf("%d\n", ary1[i] + ary2[i]);
//	}
//	return 0;
//	
//}

//#include<stdio.h>//16394번
//int main() {
//	int y = 1946;
//	int ty;
//	scanf("%d", &ty);
//	printf("%d", ty - y);
//	return 0;
//}

//#include<stdio.h>//1237번 풀고있음
//int main() {
//	printf(" ");
//	return 0;
//}

//#include<stdio.h>//1978번
//int main() {
//	int n;
//	int num, count = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &num);
//		for (int j = 2; j <= num; j++) {
//			if (num == j)
//				count++;
//			if (num % j == 0)
//				break;
//		}
//	}
//
//	printf("%d", count);
//
//	return 0;
//}

//#include<stdio.h>//15680번
//int main() {
//	int n;
//	scanf("%d", &n);
//	if (n == 0) {
//		printf("YONSEI");
//	}
//	if (n == 1) {
//		printf("Leading the Way to the Future");
//	}
//	return 0;
//}

//#include<stdio.h>//7287번
//int main() {
//	printf("34\njihoseo2006");
//	return 0;
//}

//#include<stdio.h>//2754번
//
//int main() {
//	double score[4][3] = { 
//		{4.3,4.0,3.7},//A
//		{3.3,3.0,2.7},//B
//		{2.3,2.0,1.7},//C
//		{1.3,1.0,0.7}//D
//	};
//	char name[2] = { "A0" };
//	scanf("%c", &name[0]);
//	scanf("%c", &name[1]);
//	switch (name[0])
//	{
//	case 'A':
//		if (name[1] == '+') {
//			printf("%.1lf", score[0][0]);
//		}
//		else if (name[1] == '0') {
//			printf("%.1lf", score[0][1]);
//		}
//		else {
//			printf("%.1lf", score[0][2]);
//		}
//		break;
//	case 'B':
//		if (name[1] == '+') {
//			printf("%.1lf", score[1][0]);
//		}
//		else if (name[1] == '0') {
//			printf("%.1lf", score[1][1]);
//		}
//		else {
//			printf("%.1lf", score[1][2]);
//		}
//		break;
//	case 'C':
//		if (name[1] == '+') {
//			printf("%.1lf", score[2][0]);
//		}
//		else if (name[1] == '0') {
//			printf("%.1lf", score[2][1]);
//		}
//		else {
//			printf("%.1lf", score[2][2]);
//		}
//		break;
//	case 'D':
//		if (name[1] == '+') {
//			printf("%.1lf", score[3][0]);
//		}
//		else if (name[1] == '0') {
//			printf("%.1lf", score[3][1]);
//		}
//		else {
//			printf("%.1lf", score[3][2]);
//		}
//		break;
//	default:
//		printf("0.0");//F예외문
//		break;
//	}
//	return 0;
//}

//#include<stdio.h>//15964번 부분성공
//int main() {
//	int a, b,c=0;
//	scanf("%d %d", &a, &b);
//	c = (a + b) * (a - b);
//	printf("%d", c);
//	return 0;
//}

#include<stdio.h>//15962번
int main() {
	printf("파이팅!!");
	return 0;
}