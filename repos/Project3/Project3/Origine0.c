#include <stdios.h>

int main() {

	int a=0, b=0;
	char operation;
	printf_s("entrer deux nombre ");
	scanf("%d,%d", a, b);
	printf_s("entrer l'operation (+,-,*,/)");
	scanf("&d", &operation);

	switch (operation) {
	case +:
		printf_s("a+b");
		break;
	case -:

		printf_s("a-b");
		break;

	case *:

		printf_s("a*b");
		break;

	case / :

		printf_s("a/b");

		break;

	default:

		printf_s("le signe d'operation est invalide, entrer un signe entre (+,-,*,/)");
	}

	return 0;
}