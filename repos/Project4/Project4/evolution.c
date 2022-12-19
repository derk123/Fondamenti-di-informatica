#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int  a , b ;
	char operation;
	printf_s("entrer l'operation (+,-,*,/):");
	scanf("%c", &operation);

	printf_s("entrer le premier  nombres \n: ");
	scanf("%d",&a);

	printf_s("entrer le second nombre \n: ");
	scanf("%d", &b);



	switch (operation) {
	case '+':
		printf_s("l'addition de %d et %d est %d", a,b, a+b);
		break;
	case '-':

		printf_s("la soustraction de %d et %d est %d", a,b, a-b);
		break;

	case '*' :

		printf_s("la multiplication de %d et %d est %d", a,b, a*b);
		break;

	case '/':

		printf_s("la division de %d et %d est %d", a,b, a/b);

		break;

	default:

		printf_s("%d l'operation n'est pas valide ", operation);
	}

	return 0;
}
/*#define  _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	int a, b; //The two inputs
	char operation; //Variable to read operation

	printf("Enter the operator(+,-,*,/):");
	scanf("%c", &operation);

	printf("Enter the two inputs:\n");
	scanf("%d%d", &a, &b);

	switch (operation) { // Case for every operation.
	case '+':
		printf("Addition of %d and %d is %d\n", a, b, a + b);
		break;
	case '-':
		printf("Subtraction between %d and %d is %d\n", a, b, a - b);
		break;
	case '*':
		printf("Multiplication between %d and %d is %d\n", a, b, a * b);
		break;
	case '/':
		printf("Dividing %d by %d gives %d\n", a, b, a / b);
		break;
	default:
		printf("%c is Not a valid operator\n", operation);
	}
	return 0;
}*/