#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*int main(void) {
	
	//int V[10];
	//int V[4] = { 2, 0 ,-1 , 5 };
	//printf("%d\n", V[2]);
	//scanf("%d\n", &V[2]);

	//int dato[10];
		//for (int i = 0; i < 10; i++)
			//scanf("%d", &dato[i]);
	//	for (int i = 9; i >= 0; i--)
		//	printf("%d\n", dato[i]);

	int V[10];
	int i, max, min;
	for (i=0; i<10; i++)
	scanf("%d", &V[i]);

	min = V[0];
	max = V[0];

	for (int i = 1; i < 10; i++) {
		if (V[i] > max)
			max = V[i];
		if (V[i] < min)
			min = V[i];
	}
	printf("il massimo è: %d\n", max);
	printf("il massimo è: %d\n", min);


	getchar();
	getchar();
	getchar();
	getchar();
	return 0;

}*/
/*
int main() {
	int tab[1];
	int i, N;
	int som=0;
	int media;
	//saisir la taille actuelle du tableau
	printf("entrer les elements du tableau:");
	scanf("%d", &N);
	//saisir les elements du tableau 
	for (i = 0; i < N; i++) {
		printf("Element-  %d", i + 1);
		scanf("%d", &tab[i]);
	}

	//afficher les elements 

	for (i = 0; i < N; i++) {
		printf("hai inserito nella tabella %d\n", tab[i]);
	}
	//printf("hai inserito %d elementi", N);
	for (i = 0; i < N; i++) {
		som = som + i;
		printf("la somme est %d", som);

		float media =  som / i;
		printf("la media è %f", media);
	}
	return 0;
}*/

int main() {
	int tab[1];
	int i, N;
	int som = 0;
	int media;
	//saisir la taille actuelle du tableau
	printf("entrer les elements du tableau:");
	scanf("%d", &N);
	//saisir les elements du tableau 
	for (i = 0; i < N; i++) {
		printf("Element%d-  ", i + 1);
		scanf("%d", &tab[i]);
	}

	//afficher les elements 

	/*for (i = 0; i < N; i++) {
		printf(" %d", tab[i]);
	}*/
	//printf("hai inserito %d elementi", N);
	for (i = 0; i < N; i++) {

		som = som + tab[i];
	}

	printf("la somme des elements du tableau est = %d", som);
	printf("\n");
	for (i = 0; i < N; i++) {

		float media = som / tab[i];
	}

	//float media =  som / N;
	printf("la media è 0.3%f", media);

	return 0;
}

