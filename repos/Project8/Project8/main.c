#include <stdio.h>
#include <stdlib.h>

/*int main(void) {

    int N;
    printf("\nInserisci N: ");
    scanf("%d", &N);


    if (N < 0)
        return -1;

    if (N % 2 == 0)
        return -2;

    int asterischi = N;

    while (N > 0) {
        if (asterischi <= 0)
            break;
        for (int i = 0; i < N - asterischi / 2; i++) {
            printf(" ");
        }
        for (int i = 0; i < asterischi; i++)
        {
            printf("*");
        }

        for (int i = 0; i < N - asterischi / 2; i++) {
            printf(" ");
        }

        printf("\n");
        asterischi = asterischi - 2;

    }


    getchar();
    getchar();
    getchar();


    getchar();
    return EXIT_SUCCESS;

}*/

/*int main() {

    int N;
    printf("\ninserischi N:");
    scanf("%d", &N);

    if (N < 0) {
        return -1;
    }
    if (N % 2 == 0) {
        return -2;
    }

   int asterischi = N;
    while (N>0)
    {
        if (asterischi <= 0)
            break;
    
        for (int i = 0; i < N; i++) {
            printf("*");
        }
        printf("\n");
        for (int i = 0; i < N-6; i++) {
            printf("*");
        }
        printf("\n");
        for (int i = 0; i < N - 6; i++) {
            printf("*");
        }
        printf("\n");
        for (int i = 0; i < N - 2; i++) {
            printf("*");
        }
        printf("\n");
        for (int i = 0; i < N - 6; i++) {
            printf("*");
        }
        printf("\n");
        for (int i = 0; i < N - 6; i++) {
            printf("*");
        }
        printf("\n");
        for (int i = 0; i < N ; i++) {
            printf("*");
        }
        printf("\n");
    }

    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
}*/



    int main() {
        int a, b, c;
        
        printf("entrer la valeur du premier nombre :");
        scant("%d", &a);

        printf("entrer la valeur du second nombre :");
        scant("%d", &b);

        printf("entrer la valeur du troisieme nombre :");
        scant("%d", &c);

        if (a < b, b > c) 
            printf("%d est maggiore", b);
        else {
            if (b < c) 
                printf("%d est maggiore", c);
            
            else 
                if (a>b, a>c) 
                printf("%d est maggiore", a);
            
        }
        
        return 0;


        getchar();
        getchar();
        getchar();
        getchar();
    }