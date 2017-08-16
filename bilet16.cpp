#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void print_mass(int *p, int n) {
	int j;
	for (j = 0; j < n; j++) {
		printf("%d\t", p[j]);
	}
	printf("\n");
}

int* func(int *a, int n) {
	int j, c;
	for (j = 0; j < n - 1; j += 2) {
		c = a[j];
		a[j] = a[j + 1];
		a[j + 1] = c;
	}
	return a;
}


int main()
{
	int n, i;
	scanf("%d", &n);
	int *a = (int*)malloc(n * sizeof(n));
	for (i = 0; i < n; i++) {
		printf("a[%d} = ", i);
		scanf("%d", &a[i]);
    }
	print_mass(a, n);
	a = func(a, n);
	print_mass(a, n);
	free(a);
	_getch();
	return 0;
}