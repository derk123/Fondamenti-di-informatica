#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #define N 5
// #define M 31

/* typedef struct {
	char genere[200];
	char prezzi[100];
} prodotti;

prodotti listino[N] = {

	{"pomodoro","10€"},
	{"mela","2€"},
	{"pizza","7€"},
};

int my_index = 4;//indico il numero di elementi allocati nel vettore prodotto

void stampaprodotto(int pos) {
	int i = 0;
	while (i < pos) {
		printf("\n\n prodotto: %s", listino[i].genere);
		printf("\n\n prezzi: %s", listino[i].prezzi);
		i++;
	}
}

int inserprodotto(int pos) {
	char invio;
	char c;

	if (pos >= N) {
		printf("\n\n hai raggiunto il limite max che puoi inserire");
		scanf("%c", &invio);

		return(pos);
	}

	fflush(stdin);
	printf("\n genenre: ");
	gets(listino[pos].genere);
	fflush(stdin);
	printf("\n prezzi: ");
	gets(listino[pos].prezzi);
	fflush(stdin);

	pos++;

	return (pos);
}

int menu_scelta(void) {
	int selezione = 0;
	
	do {
		printf("\n ");
		printf("\n1 - Stampa prodotti presenti");
		printf("\n2 - Inserisci prodotto");
		printf("\n3 - esci");

		printf("\n ");
		printf("\n effettua una scelta:");
		scanf("%d", &selezione);
	} while (selezione < 0 || selezione > 4);

	return selezione;
}

int main(void) {

	int scelta=0;
	scelta=menu_scelta();

	while ((scelta = menu_scelta()) != 4) {
		switch (scelta) {

		case 1:
			stampaprodotto(my_index);
			break;

		case 2:
			my_index = insertLibri(my_index);
			break;

		case 3:
			break;
		}


	}
	return 0;
}*/

//lab 8 o 9

//esercizio 3
/* #define N 5
#define M 31
int main() {
	char warehouse[N][M];
	float   price[N];
	int scelta,i=0;

	//for in j per inizializzare price[j] = -2;
	for (int j = 0; j < N; j++) {
		price[j] = -2;
	}
	do {
		printf("\n");
		printf("\n1 vuoi inserire un nuovo prodotto e il prezzo \n");
		printf("\n2 stampa listino attuale  \n");
		printf("\n3 esci \n");
		printf("\n");

		printf("\neffetua la tua scelta:");
		scanf("%d", &scelta);

		printf("\n");
		switch (scelta) {
		case 1:
			// metti il controllo if(i<N) 

			if (i < N) {
				printf("nome prodotto: ");
				scanf("%s", &warehouse[i]);


				printf("metti il prezzo in euro: ");
				scanf("%f",&price[i]);
				i++;

				printf("prodotto inserito con successo");
				break;
			}
			else
				printf("non puoi piu aggiungere elemento\n\n");
		case 2:
			for (int i = 0; i < N; i++) {

				printf("listino attuale: %s: %f\n", warehouse[i], price[i]);


			}
			break;

		default:
			printf("inserire un valore tra 0 et 3");
		}

	} while (scelta != 3);
}
*/

	
  

	/* switch (scelta) {
	case 1:
		// metti il controllo if(i<N) 

		if (i < N) {
			printf("nome prodotto: ");
			gets(warehouse[i]);


			printf("metti il prezzo in euro: ");
			gets(price[i]);
			i++;

			printf("prodotto inserito con successo");
			break;
		}
		else
			printf("non puoi piu aggiungere elemento");
	case 2:
		for(int i=0;i<N;i++){
			
		printf("listino attuale: %s: %f\n", warehouse[i], price[i]);
			
			
		}
		break;

	default :
		printf("inserire un valore tra 0 et 3");
	}
  
} */
#define N 3

int main() {
	int v[N][N];
	int total_trouve = 0;
	int max1 = 0;
	int max = 0;
	int max2 = 0;
	int max3 = 0;
	int a;
	printf("entra un valore da cercare: \n");
	scanf("%d", &a);
	printf("entra gli elementi della matrice: \n");
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%d", &v[i][j]);
		}
	}

	for (int j = 0; j < N; j++) {
		total_trouve = 0;
		for (int i = 0; i < N; i++) {
			if (v[i][j] == a) {
				total_trouve++;
			}

		}
		
		if (j != 0) {
			max1 = total_trouve;
			if (max1 > max) 
				max2 = max1;

			if (max < max1)
				max2 = max;

		}
		max = total_trouve;
		printf("i numeri di zeri consecutivi de la colona %d sono: %d\n",j, total_trouve);

		if (j == 0) {
			max3 = max;
		}
		
	}
	if (max == max1)
		printf("il massimo est : %d", max3);

	if(max!=max1)
	printf("il massimo est : %d", max2);

	return 0;
} 

//esercice 3 lab 10

