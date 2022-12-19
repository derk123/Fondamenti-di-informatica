#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*int main() {
	int tab[1];
	int i, N;
	int som = 0, sum=0;
	float media =0;
	//saisir la taille actuelle du tableau
	printf("entrer les elements du tableau:");
	scanf("%d", &N);
	//saisir les elements du tableau 
	for (i = 0; i < 10; i++) {
		printf("Element%d-  ", i + 1);
		scanf("%d", &tab[i]);
	}

	//afficher les elements 

	/*for (i = 0; i < N; i++) {
		printf(" %d", tab[i]);
	}*/
	//printf("hai inserito %d elementi", N);
	/*for (i = 0; i < N; i++) {

		som = som + tab[i];
		float media = sum / 10;
	}

	printf("la somme des elements du tableau est = %d", som);
	printf("\n");
	printf("la media è %f", media);

	return 0;
}*/

/*int main() {

	int v1[1], v2[1] ,v3[1];
	int N;
	//int i;

	printf("entrer le nombre d'element:");
	scanf("%d", &N);

		for (int i = 0; i < N; i++) {
			printf("Element%d- ", i+1);
			scanf("%d", &v3[i]);
		}
		for (int i=0 ; i < N; i++) {
			if (v1[i] < 0 && v1[i]>0 && v1[i]%5==0) {

				printf("%d\t", &v1[i]);
				return v1;
			}
				
				
				
				else {
					if (v2[i] < 0 && v2[i] % 5 != 0 && v2[i] % 2 == 0 && v2[i] % 3 == 0) {

						printf("%d\t", &v2[i]);

						return v2;
		
					}

					else 
					printf("errore");

					return -1;
				}

			return v3;
			}
		return 0;
		}
	
	*/
#define N 10
int main(void) {
	int v1[N] = { 0 };
	int v2[N] = { 0 };
	int ins, a1=0, a2=0;
	
  while ((a1 < N) || (a2 < N)) {

	 printf("inserirsci un nuovo numero ");
	 scanf("%d", &ins);
	 if (ins > 0 || ins % 3 == 0) {
		 if (a1 >= N) {
			 printf("il vettore 1 è gia pieno non posso piu agguingere");
		 }
		 else {
			 v1[a1] = ins;
			 a1 = a1 + 1;
			 printf("numero inserito nel vettore 1\n");
		 }
	 }
	 if (a2 >= N) {
		 printf("il vettore 2 è gia pieno non posso piu agguingere");
	 }
	 else if ((ins < 0) && (ins % 3 != 0) && (ins % 2 != 0)) {
		 v2[a2] = ins;
		 a2 = a2 + 1;
		 printf("numero inserito nel vettore 2\n");
	 }
  }

  printf("vettore1\tvetteore2\n");
  for (int i = 0; i < N; i++) {
	 printf("%9d\t", v1[i]);
	  printf("%9d\n", v2[i]);
  }
}