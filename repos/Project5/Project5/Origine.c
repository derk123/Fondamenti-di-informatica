#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b, c;

	printf_s("entrer le premier nombre:");
	scanf("%d", &a);
	printf_s("entrer le second nombre:");
	scanf("%d", &b);
	printf_s("entrer le troisieme nombre :");
	scanf("%d", &c);

	switch (a > b , b > c) {
	case 0:
		printf_s("%d est maggiore tra %d, %d", c, a, b);
		break;

	case 1:
		printf_s("%d est maggiore tra %d, %d:", a, b, c);
		break;

	default:
		printf_s("%d est maggiore tra %d,%d:", b);

	}

	return 0;
}