#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "RUS");
	float n=0;
	float res = 1;
	printf("¬ведите n");
	scanf("%f", &n);
	for (float i = 1; i < n; i += 0.1) {
		res *= i;
	}
	printf("%f", res);
	return 0;
}