#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Дана строка. Написать программу, печатающую три последние гласные буквы. НЕ учитывать регистр*/
int main() {
	char array[20] = { 's' };
	char c;
	int k = 0;
	printf("vvedite stroky \n");
	while((c = getchar()) != EOF){
		scanf("%c", &array[c]);
		k++;
	}
	int tmp = k;
	for (int i = tmp; i > 0; i--) {
		if (array[i] == 'a' or array[i] == 'e' or array[i] == 'i' or array[i] == 'o' or array[i] == 'u' or array[i] == 'y') {
			array[k] = array[i];
			k--;
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%c", array[i]);
	}
}
//код не работает, выводит s, я хз почему обработка не проходит совсем ни в какую
