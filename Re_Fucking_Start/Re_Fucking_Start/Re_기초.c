//�� ���� 7000�� �ڵ� ������ �̽�Ʈ��ť��Ƽ �ù߷ҵ��
//Never Forgot 2022.8.30(Tue) PM 3:36

#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//#include <stdlib.h>
//#define MAX_SIZE 10
//#define SWAP(x,y,t) ((t) - (x), (x) - (y), (y) - (t))
//
//int ary[MAX_SIZE];
//void selection_sort() {
//	int min;
//	for (int i = 0; i < MAX_SIZE; i++) {
//		min = ary[i];
//		for (int j = i + 1; j < MAX_SIZE; j++) {
//			if ()
//			{
//
//			}
//		}
//	}
//}
//
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++)
//	{
//		ary[i] = rand() % 100; //rand() == ����
//	}
//
//	selection_sort();
//
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include<time.h>
//#define MAX_SIZE 10
//
//int ary[MAX_SIZE];
//void insertion_sort();
//
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < 10; i++)
//	{
//		ary[i] = rand() % 100;
//	}
//	insertion_sort();
//}
//
//void insertion_sort() {
//	int key,j = 0;
//	for (int i = 1; i < MAX_SIZE; i++)
//	{
//		key = ary[i];
//		for (int j = i-1; j >=0 && ary[j] > key; j--)
//		{
//			ary[j + 1];
//		}
//		ary[j + 1] = key;
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//#define SWAP(x,y,t) ((t) = (x),(x) = (y),(y) = (t))
//
//int ary[MAX_SIZE];
//void bubble_sort(int ary[], int n) {
//	int i, j, temp;
//	for (i = n - 1; i > 0; i--) {
//		for (j = 0; j < i; j++)
//		{
//			if (ary[j] > ary[j + 1])
//			{
//				SWAP(ary[j], ary[j + 1], temp);
//			}
//		}
//	}
//}
//
//int main()
//{
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		ary[i] = rand() % 100;
//	}
//	bubble_sort(ary,n);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d\t", ary[i]);
//	}
//
//	return 0;
//}

//#include<stdio.h> //���� �ϴ� ����
//#include<stdlib.h>
//#define MAX_SIZE 10
//#define SWAP(x,y,t) ((t) = (x),(x) = (y),(y) = (t))
//int i, j, temp;
//
//int ary[MAX_SIZE];
//void selection_sort() {
//	int min;
//	for (i = 0; i < MAX_SIZE-1; i++) {
//		min = i;
//		for (j = i; j < MAX_SIZE; j++){
//			if (ary[min] > ary[j])
//			{
//				min = j;
//			}
//		}
//			SWAP(ary[min], ary[i], temp);
//	}
//}
//
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (i = 0; i < n; i++) {
//		ary[i] = rand() % 100;
//	}
//	selection_sort();
//
//	for (i = 0; i < n; i++) {
//		printf("%d\t", ary[i]);
//	}
//
//	return 0;
//}

//#include<stdio.h> // ���� �� �ϼ� �ȵ�.
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//void insertion_sort() {
//	int i;//u
//	int j;//s
//	int dum;
//	for (i = 1; i < MAX_SIZE; i++) {
//		dum = arr[i];
//		for (j = i - 1; j >= 0 && dum < arr[j]; j--) 
//		{
//			arr[j + 1];
//		}
//		arr[j + 1] = dum;
//	}
//}
//
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++) {
//		arr[i] = rand() % 100;
//	}
//
//	insertion_sort();
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//		return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int t1 = 26988;
//	int t2 = 17679;
//	int plus = t1 + t2;
//	int minus = t1 - t2;
//	int mul = t1 * 3;
//	int div = t2 / 4;
//
//	printf("t1 + t2 = %d:%d:%d\n", plus / 3600, (plus % 3600) / 60, (plus % 3600) % 60);
//	printf("t1 - t2 = %d:%d:%d\n", minus / 3600, (minus % 3600) / 60, (minus % 3600) % 60);
//	printf("t1 * 3 = %d:%d:%d\n", mul / 3600, (mul % 3600) / 60, (mul % 3600) % 60);
//	printf("t2 / 4 = %d:%d:%d\n", div / 3600, (div % 3600) / 60, (div % 3600) % 60);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int arr[MAX_SIZE];
//
//void insertion_sort(int arr[], int first, int last, int gap) {
//	int i, j, key;
//	for (i = first + gap; i <= last; i+=gap) {
//		key = arr[i];
//		for (j = i - gap; j >= 0 && arr[j] > key; j = j - gap) {
//			arr[j + gap] = arr[j];
//		}
//		arr[j + gap] = key;
//	}
//}
//
//	void shell_sort(int arr[], int n) {
//	int i, gap;
//		for (gap=n/2; gap>0; gap/=2 ) {
//			if (gap % 2 == 0) gap++; //¦���� �� 1�� ���ϴ� ���� ���� ������ �м� �Ǿ���.
//			for (i = 0; i < gap; i++) {
//				insertion_sort(arr,i,n-1,gap);
//			}
//		}
//	}
//
//int main() {
//	int n = MAX_SIZE;
//		srand(time(NULL));
//		for (int i = 0; i < n; i++) {
//			arr[i] = rand() % 100;
//		}
//
//	shell_sort(arr, n);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//�� �ǹ����� ���ķ� �����ؿ�!

//#include<stdio.h>
//#include<stdlib.h>
//#define MAX_SIZE 10
//#define SWAP(x,y,t) ((t)=(x), (x)=(y),(y)=(t))
//int arr[MAX_SIZE];
//int patition(int left, int right) {
//
//}
//
//void quick_sort(int left, int right) {
//
//}
//
//int main() {
//	srand(time(NULL));
//	int n = MAX_SIZE;
//	for (int i = 0; i < n; i++)
//		arr[i] = rand() % 100;
//
//	quick_sort(0, n - 1);
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include<stdio.h>//�� ����
//#include<stdlib.h>
//#define MAX_SIZE 10
//#define SWAP(x,y,t) ((t)=(x), (x)=(y),(y)=(t))
//
//int arr[MAX_SIZE];
//int n;
//int partition(int arr[], int left, int right)
//{
//	int pivot, temp;
//	int low, high;
//	low = left;
//	high = right + 1;
//	pivot = arr[left];
//	do {
//		do
//			low++;
//		while (arr[low] < pivot);
//		do
//			high--;
//		while (arr[high] > pivot);
//		if (low < high) SWAP(arr[low], arr[high], temp);
//	} while (low < high);
//	SWAP(arr[left], arr[high], temp);
//	return high;
//}
//void quick_sort(int arr[], int left, int right) {
//	if (left < right) {
//		int q = partition(arr, left, right);
//		quick_sort(arr, left, q - 1);
//		quick_sort(arr, q + 1, right);
//
//	}
//}
//int main(void) {
//	int i;
//	n = MAX_SIZE;
//	srand(time(NULL));
//	for (i = 0; i < n; i++)
//		arr[i] = rand() % 100;
//
//	quick_sort(arr, 0, n - 1);
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>//�� ���� ó������ �ٽ� �����
//#include<stdlib.h>
//#define MAX_SIZE 10
//
//int ary[MAX_SIZE];
//
//void insertion_sort(int first, int last, int gap) {
//	int i, j, key;
//	for (i = first + gap; i <= last; i+=gap) {
//		key = ary[i];
//		for (j = i - gap; j >= 0 && ary[j] > key; j = j-gap) {
//			ary[j + gap] = ary[j];
//		}
//		ary[j + gap] = key;
//	}
//}
//
//void shell_sort(int n) {
//	int gap, i;
//	for (gap = n / 2; gap >= 1; gap /= 2) {
//		if (gap % 2 == 0) gap++;
//		for (int i = 0; i < gap; i++) {
//			insertion_sort(i, MAX_SIZE, gap);
//		}
//	}
//}
//
//int main() {
//	int n = MAX_SIZE;
//	srand(time(NULL));
//	for (int i = 0; i < n; i++) {
//		ary[i] = rand() % 100;
//	}
//
//	shell_sort(n);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", ary[i]);
//	}
//	return 0;
//}

//��������! �����ô� �����ؿ�!

//#include<stdio.h>
//#define MAX_STACK_SIZE 100
//int stack[MAX_STACK_SIZE];
//int top = -1;
//
////��ȭ���� Ȯ��
//int is_full() {
//	if (top == MAX_STACK_SIZE-1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
////������� Ȯ��
//int is_empty() {
//	if (top < 0) {
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//void push(int n) {
//	if (is_full() == 1) {
//		printf("Full error!");
//	}
//	else {
//		stack[++top] = n;
//	}
//}
//
//int pop() {
//	if (is_empty() == 1) {
//		printf("Empty error!");
//		return -1;
//	}
//	else {
//		return stack[top--];
//	}
//}
//
//
//
//int main() {
//	push(1);
//	push(2);
//	push(3);
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//
//	return 0;
//}

//����ü ���� ���� �ڵ�
//#include<stdio.h>
//#define MAX_STACK_SIZE 100
//#define MAX_STRING 100
//
//struct element {
//	int student_no;
//	char name[MAX_STRING];
//	char address[MAX_STRING];
//}stack[MAX_STACK_SIZE];
//int top = -1;
//
//int is_full() {
//	if (top == MAX_STACK_SIZE - 1) {
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int is_empty() {
//	if (top < 0) {
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void push(struct element data) {
//	if (is_full() == 1) printf("Full error!");
//	else stack[++top] = data;
//
//}
//struct element pop() {
//	if (is_empty() == 1) printf("Empty error!");
//	else return stack[top--];
//}
//
//int main() {
//	struct element is = { 20220901, "JUNG", "����" };
//	struct element os;
//	push(is);
//	os = pop();
//	printf("�й�: %d\n", os.student_no);
//	printf("�̸�: %s\n", os.name);
//	printf("�ּ�: %s\n", os.address);
//	return 0;
//}

//������ ���� ���α׷�
//����ü ������ �Ӹ��� ����������..

#include<stdio.h>
#define max_stack_size 100
struct stacktype {
	int data[max_stack_size]; //������ ����ü ����� �������ν� �� ���α׷����� ���� ���� ���� �� ����
	int top;
};

// ���� �ʱ�ȭ �Լ�
void init_stack(struct stacktype* s)
{
	s->top = -1;
}

//����ü stacktype�� ��� top�� Ȱ���Ͽ� ������� Ȯ��
int is_empty(struct stacktype* s)
{
	return s->top == -1;
}
//����ü stacktype�� ��� top�� Ȱ���Ͽ� ��ȭ���� Ȯ��
int is_full(struct stacktype* s)
{
	return s->top == max_stack_size - 1;
}
// �����Լ�
void push(struct stacktype* s, int item)
{
	if (is_full(s)) printf("push error!");
	else s->data[++s->top] = item;
}
// �����Լ�
int pop(struct stacktype* s)
{
	if (is_empty(s)) printf("pop error!");
	else return s->data[s->top--];
}
int main(void)
{
	struct stacktype s;  // ������ �������� ����

	init_stack(&s);   // �Լ��� ȣ���� �� �Ű������� ������ �ּҸ� ����
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
}

