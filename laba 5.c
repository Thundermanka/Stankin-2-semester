#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int vvod(int[10]);
float obr(int, int[10], float*);
void vivod(int, int[10]);

int main() {
	int m;
	float j;
	int A[10];
	float g = 1.0;
	m = vvod(A);
	j = obr(m, A, &g);
	vivod(m, A);
}
int vvod(int A[10]){
	int N;
	do {
		printf("vvedite n :3\n");
		scanf("%d", &N);
	} while (N > 20);
	printf("vvedite elementi :D\n");
	//ввод массива
	for(int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	return N;
}

float obr(int N, int A[10], float* g){
	int max = 0;
	//поиск максисмума
	for(int i = 0; i < N; i++){
		if (A[i] > max) {
			max = A[i];
		}
	}
	//забитие максимума в элементы меньше 0
	for(int i = 0; i < N; i++){
		if (A[i] < 0) {
			A[i] = max;
		}
	}
	*g = *g + 10;
	return *g;

}
void vivod(int N, int a[10]) {
	//вывод
	for(int i = 0; i < N; i++){
		printf("%d", a[i]);
	}
}













/*efine CT_SECURE_NO_WARNINGS
#include <stdio.h>
//дан одномерный массив, найти сумму и произведение его элементов
/*i, n, s, p, a[10];
int vvod(int[10]);
void ras(int, int*, int*, int[10]);
void vivod(int, int);
int main() {
	int a[10];
	int s, p;
	int m;
	m = vvod(a);
	ras(m, &s, &p, a);
	vivod(s,p);
}
int vvod(int a[10]) {
	int n;
	printf("vvedite N\n");
	scanf("%d", &n);
	printf("vvedite elementi \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	return n;
}
void ras(int n, int* s, int* p, int a[10]) {
	*s = 0;
	*p = 1;
	for (int i = 0; i < n; i++) {
		*s = *s + a[i];
		*p = *p * a[i];
	}
}
void vivod(int s, int p) {
	printf("\nSum: %d", s);
	printf("\nPr: %d", p);
}*/
