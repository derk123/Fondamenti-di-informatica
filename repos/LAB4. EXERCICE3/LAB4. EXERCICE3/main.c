#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#define N 5

int main(void) {
	int v1[N] ;
	int a, b = 0;
	//int max, min, mai;
  while (b < N) {
	 for (int i = 0; i < 11; i++) {
		printf("entra un nuovo elemento : ");
		scanf("%d", &a);

		

		if (b < N) {
			
			v1[b] = a;
			b = b + 1;
			printf("valore inserito nel vettore  \n");


		}
		else if (b>=N) {
			printf("il vettore v1 est pieno \n");
		}

		

		//if ((v1[i] < v1[i + 1]) && (v1[i + 1] < v1[i + 2])) {
			//printf("la seria est crescente \n");
			//printf("%d-%d-%d \n", v1[i], v1[i+1], v1[i+2]);
		//}
		//else if (    ( v1[i]!= (v1[i]=i+1) )  ) {
			//printf("la seira non est crescente \n");
		//}
     }
	 printf("v1\t");
	 for (int i = 0; i < N; i++) {
		 printf("%d\t", v1[i]);
	 }
	 printf("\n");
	 int i=0;
	 if ((v1[i] < v1[i + 1]) && (v1[i + 1] < v1[i + 2])) {
		 printf("la seria est crescente \n");
		 printf("%d-%d-%d \n", v1[i], v1[i+1], v1[i+2]);

		 printf("\n");
	 }
	    
	 else if (    ( v1[i]!= (v1[i+1]) )  ) {
		 printf("la seira non est crescente \n");
	 }
  return 0;
}
}