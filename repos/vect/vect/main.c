#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*#define N 10


int main() {
	int v1[N] = {0};
	int v2[N] = {0};
	int a,b=0;
	int c = 0;
	//int n=5;
	int d=0, f=0;

 
	for (int i = 0; i < 11; i++) {
        printf("entrer le premier elements - ", i++);
           scanf("%d", &a);
        if (a > 0 || a%5==0) {
	        printf("valore entrer dans v1\n");
	           //scanf("%d", &v1[a]);
	           v1[d] = a;
	        d = d + 1;
	    }
		else {
			
	       //printf("valore entrer dans v2\n");
	       //scanf("%d", &v2[M]);
			
        }
	


		if (a < 0 && a%5!=0 && a%2!=0 && a%3==0) {
			printf("valore entrer dans le vecteur v2\n");
			v2[f] = a;
			f = f + 1;
		}
		else {
			if (v2[f] == 5) {
				printf("le vectteur v2 est plein\n");
			}
			//printf("valore entrer dans v2\n");
			//scanf("%d", &v2[M]);

		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d  ", v1[i] );
		//printf("\n");
	}
	printf("tous les elements de v1 sont %d", N);
	printf("\n");
	for (int i = 0; i < M; i++) {
		printf("%d ", v2[i]);
		//printf("\n");
	}
	printf("tous les elements de v2 sont %d", M);
	printf("\n");
	/*for (int i = 0; i < N; i++) {
		printf("%d", v1[i]);
	}
	printf ("v1 contient %d", N);
	//printf("vettore v2 a %d elementi", v2[N]);*/

	/*return 0;
}*/

/*#define N 10

int main(void) {
	int v1[N] = { 0 };
	int v2[N] = { 0 };
	int a;
	int b = 0, c = 0;

	while ( (b < N) || (c < N) ) {
		printf("inserischi un nuovo valore ");
		scanf("%d", &a);

		if ((a > 0 )|| (a % 5 == 0)) {
			if (b >= N) {
				printf("v1 é gia pieno non puo aggiungere un nuovo elemento\n");
			
			}
			else {
				v1[b] = a;
				b = b + 1;
				printf("numero inserito nel v1\n");
			}
		}
		else if ( (a < 0) && (a % 5 != 0) && (a % 2 != 0) && (a % 3 == 0)) {
			if (c >= N) {
				printf("v2 é gia pieno non puo aggiungere un nuovo elemento\n");
				
			}
			else {
				v2[c] = a;
				c = c + 1;
				printf("numero inserito nel v2\n");
			}
		}
		

		
	}
	printf("vettore 1 \tVettore 2 \n");
	for (int i = 0; i < N; i++) {
		printf("%9d\t", v1[i]);
		printf("%9d\n", v2[i]);
	}
	return 0;
}*/
/*#define N 5
#define M 6
int main(void) {
	int v1[N] = { 0 };
	int v2[M] = { 0 };
	int a=0,d;
	int b = 0, c = 0;

  while ((a<N) || (b<M)){

	  for (int i = 0; i < N; i++) {
		  printf("inserischi un nuovo valore ");
		  scanf("%d", &a);

		  if (b >= N) {
			  printf("Le vettore 1 est gia pieno non puo piu aggiungere niente \n");
			  printf("\n");
			   // printf("v1\t");
	             // for (int i = 0; i < N; i++) {
		           //    printf("%d\t ", v1[i]);
		                  //printf("%d\n", v2[i]);
					   
	             // }
				  printf("\n");
		  }
		  else {
			  v1[b] = a;
			  b = b + 1;
			  printf("valore inserito nel v1\n ");
		  }
		  //if (c >= M) {
			  //printf("le vettore 2 est gia pieno non puo aggiungere niente ");
	  //}
		  //else {
		  //	v2[c] = a;
		  //	c = c + 1;
		  //	printf("valore inserito nel v2 \n");
		  //}

	  }  
	  
	  


	for (int i = 0; i < M; i++) {
		printf("inserischi un nuovo elemento ");
		scanf("%d", &d);

		if (c >= M) {
			printf("le vettore2 est pieno non puo piu aggiungere niente \n");
			printf("\n");
			  //     printf("v2\t");
	           //for (int i = 0; i < M; i++) {
		         //   printf("% d\t", v2[i]);
	         
			//   }

			   printf("\n");
		}

		else {
			v2[c] = d;
			c = c + 1;
			printf("valore inserito nel v2 \n") ;
		}

		
	}

	
  }


	
	
	return 0;
}*/



#define N 5 
int main()
{				
	int v1[N] ;	
	int v2[N] ; 
	int a=0, b = 0, c = 0;
	int trouve = 0;
	int total_trouve = 0;

	


	/*for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {
			if (v1[i] == v2[j]) {
				trouve = 1; // indicateur de presence
				total_trouve++; // total indicateur de presence
			}
		}

		if (trouve == 0) {
			printf("\nNun le son egualite");
			break;
		}

		trouve = 0;
	}

	if(total_trouve >= N)
		printf("\nIl le son egualite");
		*/
	

	while ((c < N) || (b < N)) {
		for (int i = 0; i < 10; i++) {
			printf("entra un nuovo elemento ");
			scanf("%d", &a);

			if ((c >= N) && (b >= N)) {

				printf("les vettores v1 e v2 sont  pleins \n ");

				//if(b<N){
				  //  v2[b]=a;
				  //  b=b+1;

				   // printf("valore inserito nel v2 \n");

				   
			    }

			   // printf("v1\tv2\n");
			   // for(int i=0;i<N;i++){
				 //   printf("%d\t", v1[i]);
				   // printf("%d\n", v2[i]);
			 //   }
			//}
			/*else*/ if (c < N) {
				v1[c] = a;
				c = c + 1;

				printf("valore inserito nel v1 \n ");

			}
			else if (c >= N) {
				printf("il vettore v1 e pieno \n");
			 
				v2[b] = a;
				b = b + 1;
				 printf("valore inserito nel v2 \n");
				
			}

			//lettura primo vettore:
			/*
			* for (i=0; i < N; i++){
			*     printf("entra un nuovo elemento ");
				  scanf("%d", &v1[i]);
				  printf("valore inserito nel v1 \n ");
			   }
			   printf("il vettore v1 e' pieno \n");
			*/

			//lettura secondo vettore:
			/*
			* for (i=0; i < N; i++){
			*     printf("entra un nuovo elemento ");
				  scanf("%d", &v2[i]);
				  printf("valore inserito nel v2 \n ");
			   }
			   printf("il vettore v2 e' pieno \n");

			*/
			
			//else if( (c >= N) && ( b < N ) ) {
				//printf("il vettore v1 e pieno \n");
				//v2[b] = a;
				//b = b + 1;
				//printf("valore inserito nel v2 \n");

			//}

			 // else if(b<N){
				//printf("valore inserito nel v2 \n");
			     //v2[b]=a;
				 //b=b+1;

				 //printf("valore inserito nel v2 \n");
			 //}
		}

	}
	//if((a>=N) || (b>=N)){
	printf("v1\tv2\n");
	for (int i = 0; i < N; i++) { 
		printf("%d\t", v1[i]);
		printf("%d\n", v2[i]);
	}

	 for (int i = 0; i < N; i++) {
		for (int j = 0; j < N && trouve == 0; j++) {
			if (v1[i] == v2[j]) {
				trouve = 1; 
				total_trouve++; 
			}
		}

		if (trouve == 0) {
			printf("\ni vettori non sono gli stessi ");
			break;
		}

		trouve = 0;
	}

	if(total_trouve == N)
		printf("\ni vettori sono gli stessi");
		



	

	return 0;
}



