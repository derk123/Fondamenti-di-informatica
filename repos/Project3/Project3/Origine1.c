#include <stdios.h>

int main() {
	int a = 0, b = 0, sum = 0;

	printf_s("entra il primo numero:");
	scanf("%d", &a);
	printf_s("entra il secondo nuemro:");
	scanf("%d", &b);

	sum = a + b;
	scanf("la somme =%d", sum);
	
	return 0;
}

int main() {

	int L = 0, l = 0, p = 0;

	printf_s("entrer la largueur du rectangle:");
	scanf("%d", &l);
	printf_s("entrer la Longueur du rectangle:");
	scanf("%d", &L);

	p = 2(L * l);

	printf_s("le perimetre =%d", p);

	return 0;
}