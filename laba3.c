#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int A[20][20];
	int N, M, dlina = 0;
	printf("vvedite kolichestvo stolbcov: \n");
	scanf("%d", &N);
	printf("vvedite kolicestvo strok \n");
	scanf("%d", &M);
	if (N * M <= 400) {
		printf("vvedite elements massiva pojalyista \n");
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				scanf("%d", &A[i][j]);
				dlina++;
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				for (int s = 0; s < N; s++) {
					for (int t = 0; t < M; t++) {
						if (A[i][j] == A[s][t] && i != s && t != j) {
							printf("%d %d %d \n", A[i][j], i, j);
						}
					}
				}
			}
		}
	}

	else printf("chepuh normalno vvodi da ezhzhi");
}