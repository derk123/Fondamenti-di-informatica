#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*#define M 3
#define N 4
 int main() {

	int A[M][N];
	int som1, som2, som3, som4, som5, som6, som7,som8;
	

	printf("entra gli elementi della matrice A di ordine (%d, %d) \n", M, N);

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {

			scanf("%d", &A[i][j]);
		}
	}

	
			som1 = A[0][0] + A[0][1] + A[0][2] + A[0][3];
			som2 = A[1][0] + A[1][1] + A[1][2] + A[1][3];
			som3 = A[2][0] + A[2][1] + A[2][2] + A[2][3];
			
			som5 = A[0][0] + A[1][0] + A[2][0];
			som6 = A[0][1] + A[1][1] + A[2][1];
			som7 = A[0][2] + A[1][2] + A[2][2];
			som8 = A[0][3] + A[1][3] + A[2][3];
	
	printf("\n");
	
	printf("%d %d %d %d : %d \n", A[0][0], A[0][1], A[0][2], A[0][3], som1);
	printf("\n");
	printf("%d %d %d %d : %d \n", A[1][0], A[1][1], A[1][2], A[1][3], som2);
	printf("\n");
	printf("%d %d %d %d : %d \n", A[2][0], A[2][1], A[2][2], A[2][3], som3);

	printf("\n");

	printf("%d ", som5);
	printf("%d ", som6);
	printf("%d ", som7);
	printf("%d ", som8);

	return 0;
}  */
/* #define M  32  
#define N  32
int main() {
	int M1 ;
	int N1 ;
	int A[M][N] ;
	printf("entra il numero di riga che volete :\n");
	//int M1;
	scanf("%d", &M1);

	printf("entra il numero di colonne che volete ma minore di %d\n", M);
	//int N1;
	scanf("%d", &N1);
	printf("entra gli elementi della prima matrice di ordine \n",M1,N1);
	//scanf("%d", &A[M1][N1]);
	for (int i = 1; i <= M1; i++) {
		for (int j = 1; j <= N1; j++) {
			if (M1 <= 32 && N1 <= 32) {

				scanf("%d", &A[i][j]);
				

			}
			
			
		}
	}
	if (M1 > 32 || N1 > 32) {
		printf("che sia la riga o la colonna nessuna deve sorpassare 32\n");
		
		
	}

	printf("la sua matrice e'\n");
	for (int i = 1; i <= M1; i++) {
		for (int j = 1; j <= N1; j++) {
			if (M1 <= 32 && N1 <= 32) {
                 printf("%d ", A[i][j]);
			}

			 
		}
		printf("\n");
	}

	return 0;
}*/
/*
#define M 32
int main(void) {
	int A[M][M];
	int som_ligne[M];
	int som_colone[M];

	int riga, col, somme;

	printf("entra la matrice quadrata che vuole\n");
	scanf("%d %d", &riga, &col);

	printf("entra gli elementi della matirce\n");

	for (int i = 0; i < riga; i++) {
		for (int j = 0; j < col; j++) {

			scanf("%d", &A[i][j]);
		}
	}
	
	for (int i = 0; i < riga; i++) {
		somme = 0;
		for (int j = 0; j < col; j++) {

			somme += A[i][j];
			som_ligne[i] = somme;
		}
	}

	for (int j = 0; j < col; j++) {
		somme = 0;

		for (int i = 0; i < riga; i++) {

			somme += A[i][j];
			som_colone[j] = somme;
		}
	}
	printf("\n");

	printf("la somma delle righe + colonne vale :");

	printf("\n\n");
	for (int i = 0; i < riga; i++) {
		for (int j = 0; j < col; j++)
			printf("%d ", A[i][j]);
		printf("  %d\n", som_ligne[i]);
	    }
	printf("\n");
		for (int j = 0; j < col; j++) {

			printf("%d ", som_colone[j]);
				
		}
		
	
}*/

/*#define N 2
#define M 3
int main(void) {
	int A[N][M];
	int freq[N];
	int B[N];
	int trouve = 0;
	int total_trouve = 0;
	int i,j=0,cpt;

	printf("entra la matrice di dimensione a scelta:\n");
	if (N != M) {


		for (int i = 0; i < N; i++) {

			for (int j = 0; j < M; j++) {
				scanf("%d", &A[i][j]);
			}
		}

		for (int i = 0; i < N; i++) {
			
			for (int j = 0; j < M; j++) {
				if (A[i][j] == 0) {
					
					trouve = 1;
					total_trouve++;

					//printf("%d\n", A[i][j]);
				}
			}
			 freq[i] = total_trouve;
		}
	}
	
		
	for (int i = 0; i < N; i++) {
	  //for(int j=0;j<M;j++){
		  if (freq[i]!=0 && A[i][j] == 0) {

			printf("la sequenza e' alla riga di indice %d ed e' lunga %d\n", i, freq[i]);
			
		}
	  
	}
	return 0;
}*/
/*
#define N 3
#define M 3
int main() {
	int v[N];
	int num_pos = 0;
	int num_nega = 0;
	int num_nulli = 0;
	int num_dispari = 0;
	int num_pari = 0;
	int trouve = 0;
	int crescente=0;
	int decrescente = 0;
	int trouve1 = 0;


	

	int a;
	for (int i = 0; i < N; i++) {
		printf("\nelemento %d: ", i + 1);
-		scanf("%d", &v[i]);

        a = v[i];
		if (a < 0) {
			num_nega++;
		}

		if (a % 2 != 0) {
			num_dispari++;
		}

		if (a > 0) {
			
			num_pos++;
		}

		if (a == 0) {
			num_nulli++;
		}
		if (a % 2 == 0) {
			num_pari++;
		}

		if (i != 0) {*/ /*pour dire que i commence a element 1 pour i-1 existe car i commence a l'element 0 alors i-1 ne doit esister*/

		/*

           if (v[i] < v[i-1]) {
			   trouve = 1;
			   decrescente++;
		   }
		
		if (v[i] > v[i-1]) {
			trouve1 = 1;
			crescente++;
		}
		
		   
	}
		
		
	}
	printf("\nnombre_positif :%d \nnombre_nega:%d\nnombre_nuls:%d \nnum_pari:%d\nnum_dispari:%d", num_pos, num_nega, num_nulli,num_pari,num_dispari);
	printf("\ncrescente: %d\n decrescente: %d", crescente, decrescente);
	if (decrescente == N-1) {
		printf("\n\nest descrente\n");
	}
	else {
		if (crescente ==0 N - 1) {
			printf("\n\nest crescente");

		}
		else {
			printf("\nnon est crescent et non est descrente");
		}
	}

	
	

	return 0;
}*/

//esercizio 4.7
/* int main() {
	int a;
	int som = 0, med = 0;
	for (int i = 0;; i++) {	// continua per sempre
		printf("elemento : %d", i + 1);

		scanf("%d", &a);
		som += a ;

		if (a == 0) {
			med = som / i;
			break;
		}
	}

	printf("la media est: %d\nla somme est: %d", med, som);
}*/


//esercizio 4.5

/* int main() {
	int a;
	int som = 0;
	int prod = 1;

	for (int i = 0; som > 1000; i++) {
		printf("elemento %d", i + 1);
		scanf("%d", &a);

		som += a;
		prod *= a;

	}

	printf("la somma est :%d\nil prodotto est:%d", som, prod);
}*/

// 5.4

#define N 5
int main() {
	int b[N] = {0};
	int a[N];
	int c[N] = {0};
	int num_con_uguali = 0;
	int num_con_non_uguali = 0;
	int j=0, k=0;

	for (int i = 0; i < N; i++) {
		printf("elementi %d: ", i + 1);
		scanf_s("%d", &a[i]);

		if (i != 0) {
			if (a[i] == a[i - 1]+1) {
				num_con_uguali++;
				b[j] = a[i-1];
				j++;
				
			}
			else
			if ((a[i] - a[i - 1]) != 1) {
				num_con_non_uguali++;
				c[k] = a[i];
				k++;
				
			}
		}


	}

	printf("numeri consecutivi uguali sono :%d\ni numeri consecutivi non uguali sono %d:", num_con_uguali, num_con_non_uguali);
	printf("\n");
	for(int i=0;i<j;i++){
		printf("%d", b[i]);
		print("\n");

	}
	for (int i = 0; i < k; i++) {
		printf("%d", c[i]);
		print("\n");
	}
}