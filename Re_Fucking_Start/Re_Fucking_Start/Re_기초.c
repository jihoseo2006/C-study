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

//#include<stdio.h>
//#define max_stack_size 100
//struct stacktype {
//	int data[max_stack_size]; //������ ����ü ����� �������ν� �� ���α׷����� ���� ���� ���� �� ����
//	int top;
//};
//
//// ���� �ʱ�ȭ �Լ�
//void init_stack(struct stacktype* s)
//{
//	s->top = -1;
//}
//
////����ü stacktype�� ��� top�� Ȱ���Ͽ� ������� Ȯ��
//int is_empty(struct stacktype* s)
//{
//	return s->top == -1;
//}
////����ü stacktype�� ��� top�� Ȱ���Ͽ� ��ȭ���� Ȯ��
//int is_full(struct stacktype* s)
//{
//	return s->top == max_stack_size - 1;
//}
//// �����Լ�
//void push(struct stacktype* s, int item)
//{
//	if (is_full(s)) printf("push error!");
//	else s->data[++s->top] = item;
//}
//// �����Լ�
//int pop(struct stacktype* s)
//{
//	if (is_empty(s)) printf("pop error!");
//	else return s->data[s->top--];
//}
//int main(void)
//{
//	struct stacktype s;  // ������ �������� ����
//
//	init_stack(&s);   // �Լ��� ȣ���� �� �Ű������� ������ �ּҸ� ����
//	push(&s, 1);
//	push(&s, 2);
//	push(&s, 3);
//	printf("%d\n", pop(&s));
//	printf("%d\n", pop(&s));
//	printf("%d\n", pop(&s));
//}

//#include<stdio.h>
//#include<string.h>
//#define MAX_STACK_SIZE 100
//
//typedef struct {
//	char stack[MAX_STACK_SIZE];
//	int top;
//}StackType;
//
//void init_stack(StackType* s) {
//	s->top = -1;
//}
//
//int is_full(StackType* s) {
//	return s->top == MAX_STACK_SIZE - 1;
//}
//
//int is_empty(StackType* s) {
//	return s->top == -1;
//}
//
//void push(StackType* s, int data) {
//	if (is_full(s)) printf("push error!");
//	else s->stack[++s->top] = data;
//}
//
//int pop(StackType* s) {
//	if (is_empty(s)) printf("empty error!");
//	else return s->stack[s->top--];
//}
//
//int is_match(char* c) {
//	StackType st;
//	char ch, open;
//	int length = strlen(c);
//	init_stack(&st);
//
//	for (int i = 0; i < length; i++) {
//		ch = c[i];
//		if (ch == '(' || ch == '{' || ch == '[') {
//			push(&st,ch);
//		}
//		else if (ch == ')') {
//			if (pop(&st) != '(') {
//				return 0;
//			}
//		}
//		else if (ch == '}') {
//			if (pop(&st) != '{') {
//				return 0;
//			}
//		}
//		else if (ch == ']') {
//			if (pop(&st) != '[') {
//				return 0;
//			}
//		}
//	}
//	//������ ������� Ȯ��
//	if (is_empty(&st) == 0) return 0;
//
//	return 1; //��ȣ �˻簡 ��� ���������� ������ 1��ȯ -> ���� ����
//}
//
//int main() {
//	char* p = "{A[(i+1)]=0;}";
//	if (is_match(p) == 1)
//		printf("%s ��ȣ �˻� ����!\n", p);
//	else
//		printf("%s ��ȣ �˻� ����!\n", p);
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#define MAX_STACK_SIZE 100
//
//struct stacks {
//	char stack[MAX_STACK_SIZE];
//	int top;
//};
//
////���ð� ���õ� �Լ� ��� �ۼ�
//
//int is_full(struct stacks* s) {
//	return s->top == MAX_STACK_SIZE - 1;
//}
//
//int is_empty(struct stacks* s) {
//	return s->top == -1;
//}
//
//void push(struct stacks* s, int data) {
//	if (is_full(s)) printf("push error!");
//	else s->stack[++s->top] = data;
//}
//
//int pop(struct stacks* s) {
//	if (is_empty(s)) printf("empty error!");
//	else return s->stack[s->top--];
//}
//
//void init_stack(struct stacks* s) {
//	s->top = -1;
//}
//
//char peek(struct stacks* s) {
//	if (is_empty(s)) printf("error");
//	else return s->stack[s->top];
//}
//
////������ �켱���� �����ϴ� �Լ�
//int rank(char c) {
//	if (c == '(' || c == ')')
//		return 0;
//	else if (c == '+' || c == '-')
//		return 1;
//	else if (c == '*' || c == '/')
//		return 2;
//	else return -1;
//}
//
////���� -> ����
//void infix_to_postfix(char* s) {
//	struct stacks st;
//		char ch, c;
//		int length = strlen(s);
//		init_stack(&st);
//		for (int i = 0; i < length; i++) {
//			ch = s[i];
//			//�������϶�
//			if (rank(ch) == 1 || 2) {
//				while (peek(s) >= ch) {
//					c = pop(s);
//					printf("%c", c);
//					push(&st, ch);
//				}
//			}
//			//���� ��ȣ�϶� (
//			if (rank(ch) == 0) {
//
//			}
//			//������ ��ȣ�϶� )
//
//			//������(�ǿ������϶�)
//			if (rank(ch) == -1) {
//				printf("%c", ch);
//			}
//		}
//
//	//���ÿ� �����ִ� �͵� ��� ���
//}
//
//int main() {
//	char* s = "(2+3)*4+9";
//	printf("����ǥ����� %s\n", s);
//	printf("����ǥ����� ");
//	infix_to_postfix(s);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#define MAX_SIZE 100
//
//struct stacks {
//	int stack[MAX_SIZE];
//	int top;
//};
//
//int is_full(struct stacks* s) {
//	return s->top == MAX_SIZE - 1;
//}
//
//int is_empty(struct stacks* s) {
//	return s->top == -1;
//}
//
//void push(struct stacks* s, int data) {
//	if (is_full(s)) printf("push error!");
//	else s->stack[++s->top] = data;
//}
//
//int pop(struct stacks* s) {
//	if (is_empty(s)) printf("empty error!");
//	else return s->stack[s->top--];
//}
//
//void init_stack(struct stacks* s) {
//	s->top = -1;
//}
//
//int calc_postfix(char exp[]) {
//	struct stacks st;
//	int first, second, value;
//	int len = strlen(exp);
//	char c;
//
//	init_stack(&st);
//
//	for (int i = 0; i < len; i++) {
//		c = exp[i];
//		//�ǿ������϶�
//		if (c != '/'||'+'||'*'||'-') {
//			push(&st,c);
//		}
//		//�������϶�
//		if (c == '/' || '+' || '*' || '-') {
//			if (c == '+') {
//				second = pop(&st);
//				first = pop(&st);
//				push(&st, first + second);
//			}
//			else if (c == '-') {
//				second = pop(&st);
//				first = pop(&st);
//				push(&st, first - second);
//			}
//			else if (c == '*') {
//				second = pop(&st);
//				first = pop(&st);
//				push(&st, first * second);
//			}
//			else if (c == '/') {
//				second = pop(&st);
//				first = pop(&st);
//				push(&st, first / second);
//			}
//			else {
//				push(&st, c - 48);
//			}
//		}
//	}
//	return pop(&st);
//}
//
//int main() {
//	printf("����ǥ����� : 82/3-32*+\n");
//	printf("������� %d\n", calc_postfix("82/3-32*+"));
//	return 0;
//}

//#include<stdio.h>
//#define MAX_QUEUE_SIZE 5
//
//struct Queue {
//	int data[MAX_QUEUE_SIZE];
//	int front, rear;
//};
//
//void init_queue(struct Queue* q){
//	q->front = -1;
//	q->rear = -1;
//}
//
//int is_full(struct Queue* q) {
//	return q->rear == MAX_QUEUE_SIZE - 1;
//}
//
//int is_empty(struct Queue* q) {
//	return q->front == q->rear;
//}
//
//void enqueue(struct Queue* q, int item) {
//	if (is_full(q)) printf("enqueue error!");
//	else q->data[++q->rear] = item;
//}
//
//int dequeue(struct Queue* q) {
//	if (is_empty(q)) printf("dequeue error!");
//	else return q->data[++q->front];
//}
//
//void print_queue(struct Queue* q) { // ��� ���� ������ִ� �Լ�
//	for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
//		if (i <= q->front || i > q->rear) {
//			printf("   |");
//		}
//		else {
//			printf("%d |", q->data[i]);
//		}
//	}
//	printf("\n");
//}
//
//int main() {
//	int n;
//	struct Queue q;
//	init_queue(&q);
//
//	enqueue(&q, 10); print_queue(&q);
//	enqueue(&q, 20); print_queue(&q);
//	enqueue(&q, 30); print_queue(&q);
//	enqueue(&q, 40); print_queue(&q);
//	enqueue(&q, 50); print_queue(&q);
//	enqueue(&q, 60); print_queue(&q);
//	enqueue(&q, 70); print_queue(&q);
//	enqueue(&q, 80); print_queue(&q);
//	enqueue(&q, 90); print_queue(&q);
//
//	n = dequeue(&q); print_queue(&q);
//	n = dequeue(&q); print_queue(&q);
//	n = dequeue(&q); print_queue(&q);
//	n = dequeue(&q); print_queue(&q);
//	n = dequeue(&q); print_queue(&q);
//	n = dequeue(&q); print_queue(&q);
//	n = dequeue(&q); print_queue(&q);
//	n = dequeue(&q); print_queue(&q);
//	n = dequeue(&q); print_queue(&q);
//
//	return 0;
//}

//#include<stdio.h>
//#define MAX_QUEUE_SIZE 5
//
//struct Queue {
//	int data[MAX_QUEUE_SIZE];
//	int front, rear;
//};
//
//void init_queue(struct Queue* q) {
//	q->front = q->rear = 0;
//}
//
//int is_empty(struct Queue* q) {
//	return (q->front == q->rear);
//}
//
//int is_full(struct Queue* q) {
//	return (q->front == ((q->rear + 1) % MAX_QUEUE_SIZE));
//}
//
//void print_queue(struct Queue* q) {
//	int i = q->front;
//		if (!is_empty(q)) {
//			while (i != q->rear) { //��ȣ�� �� ������?
//				i = (i + 1) % MAX_QUEUE_SIZE;
//				printf("%d | ", q->data[i]);
//			}
//		}
//	printf("\n");
//}
//
//void enqueue(struct Queue* q, int item) {
//	if (is_full(q)) printf("��ȭ����\n");
//	else {
//		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//		q->data[q->rear] = item;
//	}
//}
//
//int dequeue(struct Queue* q) {
//	if (is_empty(q)) {
//		printf("�������\n");
//		return 0;
//	}
//	else {
//		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//		return q->data[q->front];
//		
//	}
//}
//
//int main() {
//	struct Queue q;
//	init_queue(&q);
//	enqueue(&q, 10);	print_queue(&q);
//	enqueue(&q, 20);	print_queue(&q);
//	enqueue(&q, 30);	print_queue(&q);
//	dequeue(&q);	print_queue(&q);
//	dequeue(&q);	print_queue(&q);
//	dequeue(&q);	print_queue(&q);
//
//	return 0;
//}

//#include<stdio.h>
//#define MAX_QUEUE_SIZE 5
//
////����ť���� ����� init_queue, is_full, is_empty�Լ� �Ⱥ��� �ۼ��ϱ�
//
//struct Queue {
//	int data[MAX_QUEUE_SIZE];
//	int front, rear;
//};
//void init_queue(struct Queue* q) {
//	q->front = q->rear = 0;
//}
//
//int is_empty(struct Queue* q) {
//	return (q->front == q->rear);
//}
//
//int is_full(struct Queue* q) {
//	return (q->front == ((q->rear + 1) % MAX_QUEUE_SIZE));
//}
//
//void print_deque(struct Queue* q) {
//	int i = q->front;
//	if (!is_empty(q)) {
//		while (i != q->rear) {
//			i = (i + 1) % MAX_QUEUE_SIZE;
//			printf("%d |  ", q->data[i]);
//		}
//		printf("\n");
//	}
//}
//
////����ť ���԰� ���� enqueue
//void add_rear(struct Queue* q, int item) {
//	if (is_full(q))	printf("��ȭ����\n");
//	else {
//		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
//		q->data[q->rear] = item;
//	}
//}
//
////����ť�� ���� �Լ��� ���� dequeue
//int delete_front(struct Queue* q) {
//	if (is_empty(q)) {
//		printf("�������\n");
//		return 0;
//	}
//	else {
//		//����
//		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//		return q->data[q->front];
//	}
//}
//
////front�� ���� -> �� �ݴ�� �̵� 
//void add_front(struct Queue* q, int item) {
//	//���� �� ��ȭ ���� Ȯ�� (������ ����)
//	if (is_full(q)) {
//		printf("��ȭ����");
//	}
//	else {
//		q->data[q->front] = item;
//		q->front = (q->front - 1+MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//	}
//}
//
////rear���� ���� -> �ݴ�� �̵�
//int delete_rear(struct Queue* q) {
//	int val; // ��ȯ�ϰ� ������ ������ ������ ����
//	if (is_empty(q)) {
//		printf("�������");
//		return 0;
//	}
//	else {
//		val = q->data[q->rear];
//		q->rear = (q->rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
//		return val;
//	}
//}
//
//int main() {
//	struct Queue q;
//	init_queue(&q);
//	add_rear(&q, 10);	print_deque(&q);
//	add_front(&q, 20);	print_deque(&q);
//	add_rear(&q, 30);	print_deque(&q);
//
//	delete_front(&q);	print_deque(&q);
//	delete_rear(&q);	print_deque(&q);
//
//	return 0;
//}

//#include<stdio.h>
//#define MAX_LIST_SIZE 5
//
//struct ArrayListType {
//	int array[MAX_LIST_SIZE]; //����Ʈ�� ����� �迭 ����
//	int size;  // ���� ����Ʈ�� ����� �׸���� ����
//};
//
//void init_list(struct ArrayListType* L) {
//	//������ �ʱ�ȭ�ұ��?
//	L->size = 0;
//}
//
//int is_full(struct ArrayListType* L) {
//	return L->size == MAX_LIST_SIZE;
//}
//
//int is_empty(struct ArrayListType* L) {
//	//������� ������?
//	return L->size == 0;
//}
//
//void print_list(struct ArrayListType* L) {
//	for (int i = 0; i < L->size; i++) {
//		printf("%d -> ", L->array[i]);
//	}
//	printf("\n");
//}
//
//void insert_last(struct ArrayListType* L, int item) {
//	if (is_full(L)) {
//		printf("��ȭ����\n");
//	}
//	else {
//		//�迭 �� �ڿ� �׸� ����
//		L->array[L->size++] = item;
//	}
//}
//
//void insert(struct ArrayListType* L, int pos, int item) {
//	if (is_full(L)) printf("��ȭ����\n"); //����� ��1
//	else if (!is_full(L)&&pos <= L->size) { // pos�� ��ġ�� ��� �־�� ������ �� �������?
//		for (int i = L->size  ; i > pos; i--) {
//			//��ĭ�� �ڷ� �б�
//			L->array[i] = L->array[i - 1];
//		}
//		//���ϴ� �ڸ��� item ����
//		L->array[pos] = item;
//		//����Ʈ �迭�� �� �׸� �Ѱ� ����
//		L->size++;
//	}
//	else printf("��ġ����\n"); // ����� ��3
//}
//
//int delete(struct ArrayListType* L, int pos) {
//	int item;
//	if (is_empty(L)) { //����� ��1
//		printf("�������\n");
//		return 0;
//	}
//	else if (pos <0 || pos >= MAX_LIST_SIZE || pos >= L->size) { //pos�� � ������ ���� �� ������ �����? (����� ��2)
//		printf("��ġ����\n");
//	}
////	item = L->array[pos]; // ����� ��3
//	//��ĭ�� ������ ����
//	for (int i = pos; i <= L->size - 1; i++) {
////		L->array[i] = L->array[i + 1];
//	}
//	
//	//����Ʈ �迭�� �� �׸� �Ѱ� ����
//	L->size--;
//	return item;
//}
//
//int main() {
//	struct ArrayListType list;
//
//	init_list(&list);
//	insert(&list, 0, 10);	print_list(&list);
//	insert(&list, 0, 20);	print_list(&list);
//	insert(&list, 0, 30);	print_list(&list);
//	insert_last(&list, 40);	print_list(&list);
//	delete(&list, 0);	print_list(&list);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
////��屸��ü
////�����Լ� �����
////�쵵������ �����
////��忡 �������ʵ忡 10 ����,link �� NULL ����
////p��� �����
////p�� data�ʵ忡 20����, link�� NULL ����
//
//struct Node {
//	int data;
//	struct Node* link;
//
//};
//
//struct Node* insert_first() {
//
//}
//
//int main() {
//	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
//	head->data = 10;
//	head->link = NULL;
//	struct Node* p = (struct Node*)malloc(sizeof(struct Node));
//	p->data = 20;
//	p->link = NULL;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node
//{
//	int data;
//	struct Node* link;
//};
//
//struct Node* head;
//
//struct Node* insert_first(struct Node* head, int value) {
//	struct Node* p = (struct Node*)malloc(sizeof(struct Node));
//	p->data = value;
//	p->link = head;
//	head = p;
//}
//
//struct Node* insert(struct Node* pre, int value) {
//	struct Node* p = (struct Node*)malloc(sizeof(struct Node));
//	p->data = value;
//	p->link = pre->link;
//	pre->link = p;
//}
//
//int main() {
//	head = NULL;
//	insert_first(head, 10);
//	
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//struct Listnode {
//	int data;
//	struct Listnode* link;
//};
//
//struct Listnode* insert_first(struct Listnode* head, int value) {
//	struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
//	p->data = value;
//	p->link = head;
//	head = p;
//	return head;
//}
//
//struct Listnode* insert(struct Listnode* head, struct Listnode* pre, int value) {
//	struct Listnode* p = (struct Listnode*)malloc(sizeof(struct Listnode));
//	p->data = value;
//	p->link = pre->link;
//	pre->link = p;
//	return head;
//}
//
//struct Listnode* delete_first(struct Listnode* head) {
//	struct Listnode* removed;
//	if (head == NULL) return NULL;
//	removed = head;
//	head = head->link;
//	free(removed);
//	return head;
//}
//
//struct Listnode* delete(struct Listnode* head, struct Listnode* pre) {
//	struct Listnode* removed;
//
//	removed = pre->link;
//	pre->link = removed->link;
//	free(removed);
//	return head;
//}
//
//void print_list(struct Listnode* head) {
//	struct Listnode* p = head;
//	//��� �Լ� �ۼ�
//	while (p) {
//		printf("%d -> ", p->data);
//		p = p->link;
//	}
//	printf("NULL\n");
//}
//
//int main() {
//	struct Listnode* head = NULL;
//	for (int i = 0; i < 5; i++) {
//		head = insert_first(head, i);//�Լ� ȣ��(�Ǿտ� �ִ� �Լ�)
//		print_list(head);//����Լ� ȣ��
//	}
//	for (int i = 0; i < 5; i++) {
//		head = delete_first(head);//�Ǿ� ��� �����ϴ� �Լ� ȣ��
//		print_list(head);	//��� �Լ� ȣ��
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//struct Node {
//	int data;
//	struct Node* link;
//};
//
////head ���� ������ �ۼ��ϱ�
//struct Node* head = NULL;
//
//void insert_first(int value) {
//	struct Node* p = (struct Node*)malloc(sizeof(struct Node));
//	p->data = value;
//	if (head == NULL) {
//		head = p;
//		p->link = head;
//	}
//	else {
//		p->link = head->link;
//		head->link = p;
//	}
//	return head;
//}
//
//void insert_last(int value) {
//	struct Node* p = (struct Node*)malloc(sizeof(struct Node));
//	p->data = value;
//	if (head == NULL) {
//		head = p;
//		p->link = head;
//	}
//	else {
//		p->link = head->link;
//		head->link = p;
//		head = p;
//	}
//	return head;
//}
//
//void delete() {
//	struct Node* removed;
//	removed = head->link;
//	head->link = removed->link;
//	free(removed);
//}
//
//void print_list() {
//	struct Node* p;
//
//	if (head == NULL) return;
//	p = head->link;
//	do {
//		printf("%d -> ", p->data);
//		p = p->link;
//	} while (p != head);
//
//	printf("%d -> \n", p->data);
//}
//
//int main() {
//	insert_last(10);
//	insert_last(20);
//	insert_first(30);
//	insert_last(40);
//
//	print_list();
//
//	delete();
//	print_list();
//
//	delete();
//	print_list();
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
////1. ��� ����
//struct Node {
//	int data;
//	struct Node* llink;
//	struct Node* rlink;
//};
//
//struct Node* head;
//
//void init() {
//	//2. ���� ����Ʈ(head) �ʱ�ȭ�ϱ�
//	head->llink = head;
//	head->rlink = head;
//}
//
//void insert(struct Node* before, int value) {
//	//3. ���� �Լ� �ۼ�
//	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//	newnode->data = value;
//
//	newnode->rlink = before->rlink;
//	newnode->llink = before;
//
//	before->llink->llink = newnode;
//	before->rlink = newnode;
//	
//}
//
//void delete(struct Node* removed) {
//	//4. ���� �Լ� �ۼ�
//	if (removed == head) return;
//	else {
//		removed->llink->rlink = removed->rlink;
//		removed->rlink->llink = removed->llink;
//	}
//	free(removed);
//}
//
//void print_list() {
//	//5. ��� �Լ� �ۼ�
//	struct Node* p = head->rlink;
//	for (; p != head; p = p->rlink)
//		printf("<- %d -> ", p->data);
//	printf("\n");
//}
//
//int main() {
//	head = (struct Node*)malloc(sizeof(struct Node));
//	init();
//	printf("���� �ܰ�\n");
//	for (int i = 0; i < 5; i++) {
//		//6. ���� �Լ� ȣ��
//		insert(head, i);
//		//7. ��� �Լ� ȣ��
//		print_list();
//	}
//
//	printf("\n���� �ܰ�\n");
//	for (int i = 0; i < 5; i++) {
//		//8. ���� �Լ� ȣ��
//		delete(head->rlink);
//		//9. ��� �Լ� ȣ��
//		print_list();
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//#define nullptr 0
//
//typedef struct node
//{
//	char szName[32];
//	struct node* link;
//}NODE;
//
//NODE* g_pHead = nullptr;
//NODE* g_pTail = nullptr;
//
//void PrintList()
//{
//	NODE* pNode = g_pHead;
//	while (pNode != nullptr)
//	{
//		printf("[%p] %s [%p]\n",
//			pNode, pNode->szName, pNode->link);
//		pNode = pNode->link;
//	}
//}
//
//void InsertNode(char* strName) {
//	NODE* newNode = (NODE*)malloc(sizeof(NODE));
//	strcpy(newNode->szName, strName);
//	newNode->link = nullptr;
//	if (g_pHead == nullptr) {
//		g_pHead = newNode;
//	}
//	else {
//		g_pTail->link = newNode;
//	}
//	g_pTail = newNode;
//}
//
//int main()
//{
//	InsertNode("ȫ�浿");
//	InsertNode("������");
//	InsertNode("������");
//
//	PrintList();
//
//	return 0;
//}

//#include <stdio.h>
//#include <malloc.h>
//
//typedef int element;
//
//typedef struct {
//	element data;
//	struct StackNode* link;
//} StackNode;
//
//typedef struct {
//	StackNode* top;
//} LinkedStackType;
//
//// �ʱ�ȭ �Լ�
//void init(LinkedStackType* s)
//{
//	s->top = NULL;
//}
//// ���� ����
//int is_empty(LinkedStackType* s) {
//	return (s->top == NULL);
//}
//// ��ȭ ����
//int is_full(LinkedStackType* s) {
//	return 0;
//}
//// ����
//void push(LinkedStackType* s, element item) {
//	StackNode* temp =
//		(StackNode*)malloc(sizeof(StackNode));
//	temp->data = item;
//	temp->link = s->top;
//	s->top = temp;
//}
//// ����
//element pop(LinkedStackType* s)
//{
//	if (is_empty(s)) {
//		printf(stderr, "������ �������\n");
//		exit(1);
//	}
//	else {
//		StackNode* temp = s->top;
//		element data = temp->data;
//		s->top = s->top->link;
//		free(temp);
//		return data;
//	}
//}
//// ���
//void print_stack(LinkedStackType* s) {
//	for (StackNode* p = s->top; p != NULL; p = p->link)
//		printf("%d->", p->data);
//	printf("NULL \n");
//}
//int main(void)
//{
//	LinkedStackType s;
//	init(&s);
//	push(&s, 1); print_stack(&s);
//	push(&s, 2); print_stack(&s);
//	push(&s, 3); print_stack(&s);
//	pop(&s); print_stack(&s);
//	pop(&s); print_stack(&s);
//	pop(&s); print_stack(&s);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//struct TreeNode {
//	int data;
//	struct TreeNode* left, * right;
//};
//
//struct TreeNode n1 = { 4, NULL, NULL };
//struct TreeNode n2 = { 5, NULL, NULL };
//struct TreeNode n3 = { 6, NULL, NULL };
//struct TreeNode n4 = { 2, &n1, &n2 };
//struct TreeNode n5 = { 3, NULL, &n3 };
//struct TreeNode n6 = { 1, &n4, &n5 };
//struct TreeNode* root = &n6;
//
//	void inorder(struct TreeNode* root) {
//	if (root != NULL) {
//		//���� ��ȸ
//		inorder(root->left);
//		printf("%d", root->data);
//		inorder(root->right);
//	}
//}
//
//void preorder(struct TreeNode* root) {
//	if (root != NULL) {
//		printf("%d", root->data);
//		preorder(root->left);
//		preorder(root->right);
//	}
//}
//
//void postorder(struct TreeNode* root) {
//	if (root != NULL) {
//		//���� ��ȸ
//		postorder(root->left);
//		postorder(root->right);
//		printf("%d", root->data);
//	}
//}
//
//int main() {
//	printf("���� ��ȸ = ");
//	inorder(root);
//	printf("\n");
//
//	printf("���� ��ȸ = ");
//	preorder(root);
//	printf("\n");
//
//	printf("���� ��ȸ = ");
//	postorder(root);
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//#define nullptr 0
//
//typedef struct node
//{
//	char szName[32];
//	struct node* link;
//}NODE;
//
//NODE* g_pHead = nullptr;
//NODE* g_pTail = nullptr;
//
//void PrintList()
//{
//	NODE* pNode = g_pHead;
//	while (pNode != nullptr)
//	{
//		printf("[%p] %s [%p]\n",
//			pNode, pNode->szName, pNode->link);
//		pNode = pNode->link;
//	}
//}
//
//void InsertNode(char* strName)
//{
//	NODE* newNode = (NODE*)malloc(sizeof(NODE));
//
//	strcpy(newNode->szName, strName);
//	newNode->link = nullptr;
//
//	NODE* pre = nullptr;
//	NODE* cur = g_pHead;
//
//	while (cur != nullptr)
//	{
//		if (strcmp(cur->szName, newNode->szName) > 0)
//			break;
//
//		pre = cur;
//		cur = cur->link;
//	}
//
//	if (pre == nullptr) // g_pHead�� ����
//	{
//		newNode->link = g_pHead;
//		g_pHead = newNode;
//		if (g_pTail == nullptr)  // ���ο� ��尡 ó�� ����� ��
//		{
//			g_pTail = newNode;
//		}
//	}
//	else if (pre == g_pTail)  // g_pTail�� ����
//	{
//		g_pTail->link = newNode;
//		g_pTail = newNode;
//	}
//	else                      // ����Ʈ �߰��� ����
//	{
//		newNode->link = pre->link;
//		pre->link = newNode;
//	}
//}
//
//void DeleteNode(char* str)
//{
//	NODE* pNode = g_pHead;
//
//	if (pNode == nullptr)
//	{
//		printf(" Empty List!!\n");
//		return;
//	}
//
//	NODE* pre = nullptr;
//	while (pNode != nullptr)
//	{
//		if (strcmp(pNode->szName, str) == 0)
//			break;
//
//		pre = pNode;
//		pNode = pNode->link;
//	}
//
//	if (pNode == nullptr)
//	{
//		printf(" Not Found!!\n");
//		return;
//	}
//
//	if (pre == nullptr) // ù��� ����
//	{
//		g_pHead = pNode->link;
//	}
//	else
//	{
//		pre->link = pNode->link;
//
//		if (pNode == g_pTail)
//			g_pTail = pre;
//	}
//	free(pNode);
//}
//
//void InverseList()
//{
//	NODE* p = nullptr;
//	NODE* q = g_pHead;
//	NODE* r = nullptr;
//
//	g_pTail = q;
//	while (q != nullptr)
//	{
//		r = q->link;
//
//		q->link = p;
//
//		p = q;
//		q = r;
//	}
//	g_pHead = p;
//}
//
//int PrintUI()
//{
//	int n;
//
//	printf("[1]Add [2]Search [3]Print [4]Remove [0]Exit\n : ");
//	scanf("%d", &n);
//	return n;
//}
//
//int main()
//{
//	char a[10]={0};
//	while (PrintUI != 0)
//	{
//		PrintUI();
//		if (PrintUI() == 1) {
//			scanf("%s", a);
//			InsertNode(a);
//		}
//	}
//
//	return 0;
//}

//#include<stdio.h>//����Լ� c��� �ڵ�
//#include<stdlib.h>
//
//struct Treenode {
//	int data;
//	struct Treenode* left, * right;
//};
//
//struct Treenode n1 = { 4, NULL, NULL };
//struct Treenode n2 = { 5, NULL, NULL };
//struct Treenode n3 = { 6, NULL, NULL };
//struct Treenode n4 = { 2, &n1, &n2 };
//struct Treenode n5 = { 3, NULL, &n3 };
//struct Treenode n6 = { 1, &n4, &n5 };
//struct Treenode* root = &n6;
//
//struct Treenode* search(struct Treenode* node, int key) {
//	if (node == NULL) printf("Ž�� ����!");
//	if (key == node->data) printf("Ž�� ����!");
//	else if (key < node->data)
//		return search(node->left, key);
//	else
//		return search(node->right, key);
//}

//#include<stdio.h>
//#include<stdlib.h>
//struct Treenode {
//	int data;
//	struct Treenode* left, * right;
//};
//
//struct Treenode* search(struct Treenode* node, int key) {
//	if (node == NULL) return NULL;
//	if (key == node->data) return node;
//	else if (key < node->data)
//		return (node->left, key);
//		else
//			return (node->right, key);
//}

//struct Treenode {
//	int data;
//	struct Treenode* left, * right;
//};
//
//struct Treenode* new_node(int key) {
//	struct Treenode* new = (struct Treenode*)malloc(sizeof(struct Treenode));
//	//new��忡 key�� ����
////new�� left�� right�� NULL��
//	return new;
//}
//
//struct Treenode* insert(struct Treenode* node, int key) {
//	if (node == NULL) return new_node(key);
//
//	if (node->data > key)
//		node->left = insert(node->left, key);
//	else if (node->data < key)
//		node->right = insert(node->right, key);
//
//		return node;
//}

#include<stdio.h>//���� Ž�� Ʈ�� �ڵ�
#include<stdlib.h>

struct Treenode {
	int key;
	struct Treenode* left;
	struct Treenode* right;
};

struct Treenode* root = NULL;

//��ȯ���� �ִ� ����? ����Լ� �ϸ鼭 ��� node�� �ٲ�鼭 �̵��ؾ� �ϱ� ������
struct Treenode* search(struct Treenode* node, int key) {
	if (node == NULL) return NULL;
	if (node->key > key)
		return search(node->left, key);
	else if (node->key < key)
		return search(node->right, key);
	else
		return node;
}

struct Treenode* newnode(int key) {
	struct Treenode* new = (struct Treenode*)malloc(sizeof(struct Treenode));
	new->key = key;
	new->left = NULL;
	new->right = NULL;
	return new;
}

struct Treenode* insert(struct Treenode* node, int key) {
	if (node == NULL) return newnode(key);
	if (node->key > key)
		node->left = insert(node->left, key);
	else if (node->key < key)
		node->right = insert(node->right, key);

	return node;
}

struct Treenode* min_value(struct Treenode* node) {
	struct Treenode* current = node;
	while (node->left != NULL) {
		current = current->left;
	}

	return node;
}

struct Treenode* delete(struct Treenode* node, int key) {
	if (node == NULL) return node;
	if (node->key > key)
		node->left = delete(node->left, key);
	else if (node->key < key)
		node->right = delete(node->right, key);
	else {
		if (node->left == NULL) {
			struct Treenode* temp = node->right;
			free(node);
			return temp;
		}
		else if (node->right == NULL) {
			struct Treenode* temp = node->left;
			free(node);
			return temp;
		}
		struct Treenode* temp = min_value(node->right);
		node->key = temp->key;
		node->right = delete(node->right, temp->key);
	}
	return node;
}

void inorder(struct Treenode* root) {
	if (root) {
		inorder(root->left);
		printf("[%d] ", root->key);
		inorder(root->right);
	}
}

int main() {
	root = insert(root, 30);          root = insert(root, 20);
	root = insert(root, 10);         	root = insert(root, 40);
	root = insert(root, 50);   	root = insert(root, 60);

	inorder(root);
	printf("\n\n");

	if (search(root, 30) != NULL)         printf("30ã��!\n");
	else            printf("30����!\n");

	printf("\n");
	delete(root, 20);
	inorder(root);
	printf("\n");

	return 0;
}

