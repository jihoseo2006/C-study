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

#include <stdio.h>//1009번 분산처리 문제.
int main() {
    int tc, a, b, tm;
    scanf("%d", &tc);
    for (int i = 0; i < tc; i++) {
        scanf(" %d %d", &a, &b);
        tm = 1;
        for (int j = 0; j < b; j++) {
            tm = (tm * a) % 10;
        }
        if (tm == 0) {
            tm += 10;
        }
        printf("%d\n", tm);
    }
    return 0;
}