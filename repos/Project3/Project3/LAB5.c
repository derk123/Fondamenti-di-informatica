#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	// int mese;
	//printf("entra il numero del mese :");

	int _giorno, _mese, _anno;
	printf("Insersci data: ");
	scanf("%d/%d/%d", &_giorno, &_mese, &_anno);
	printf("\nHai inserito %d-%d-%d", _giorno, _mese, _anno);
	
	// scanf("%d", &mese);

	switch ( _mese ) {
	case 1:
		printf("\n%d Gennaio %d", _giorno, _anno);
		break;
	case 2:
		printf("\n%d Febbraio %d", _giorno, _anno);
		break;
	case 3:

		printf("\n%d Marzo %d", _giorno, _anno);
		break;
	case 4:
		printf("\n%d aprile %d", _giorno, _anno);
		break;
	case 5:
		printf("\n%d maggio %d", _giorno, _anno);
		break;
	case 6:

		printf("\n%d Giugno %d", _giorno, _anno);
		break;
	case 7:

		printf("\n%d luglio %d", _giorno, _anno);
		break;
	case 8:

		printf("\n%d agosto %d", _giorno, _anno);
		break;
	case 9:

		printf("\n%d settembre %d", _giorno, _anno);
		break;
	case 10:

		printf("\n%d ottobre %d", _giorno, _anno);
		break;

	case 11:

		printf("\n%d novembre %d", _giorno, _anno);
		break;
	case 12:

		printf("\n%d dicembre %d", _giorno, _anno);
		break;

	default:

		printf("valore invalido! entra un valore valido tra 1 e 12");

	}


	// inutile
	printf("\n\n\n\n");
	getchar();
	getchar();
	getchar();

	getchar();
	return 0;

	
}
