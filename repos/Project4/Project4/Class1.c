#include <stdio.h>

int main() {

	int a, b, c;

	printf_s("entrer le premier nombre:");
	scanf("%d", &a);
	printf_s("entrer le second nombre:");
	scanf("%d", &b);
	printf_s("entrer le troisieme nombre :");
	scanf("%d", &c);

	switch (a > b) {
	case 0:
		printf_s("%d est maggiore tra %d, %d", b, a, c);
		break;

	case 1:
		printf_s("%d est maggiore tra %d, %d:", a, b, c);
		break;

	default:
		printf_s("%d est maggiore tra %d,%d:", c);

	}

	return 0;
}