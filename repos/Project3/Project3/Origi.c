#include <stdio.h>

int main() {
	int a;
	printf_s("entrer un nombre :");
	scanf("%d", &a);

	if (a > 0) {
		printf_s("%d est positivo", a);

	}
	else {
		if (a == 0) {
			printf_s("%d est nul", a);

		}
		else {
			printf_s("%d est negatif", a);

		}

	}

	return 0;
}