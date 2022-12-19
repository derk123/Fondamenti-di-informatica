#define _CRT_SECURE_NO_WARNINGS

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


/*int main(void) {
    int N;

    printf("\nInserisci N:");
    scanf("%d", &N);

    if (N < 0)
        return -1;

    if (N % 2 == 0)

        return -2;

    int aasterischi = N;

    for (size_t i = 0; i < N; i++)
    {
        printf("*");
    }
    printf("\n");

    for (size_t i = 0; i < N - 6; i++)
    {
        printf("*");
    }

    printf("\n");

    for (size_t i = 0; i < N - 6; i++)
    {
        printf("*");
    }
    printf("\n"); for (size_t i = 0; i < N - 2; i++)
    {
        printf("*");
    }
    printf("\n"); for (size_t i = 0; i < N - 6; i++)
    {
        printf("*");
    }
    printf("\n");

    for (size_t i = 0; i < N - 6; i++)
    {
        printf("*");
    }
    printf("\n"); for (size_t i = 0; i < N; i++)
    {
        printf("*");
    }
    printf("\n");

    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
}*/





int main() {
    int i, k, j, l;
    int n,N;
    printf("Inserire il numero di * da stampare ad ogni iterazione\n");
    scanf_s("%d", &n);
    for (k = 0; k < N; k++) {
        for (i = 0; i <= k; i++) {
            for (j = 0; j < n; j++)
                printf("*");
            printf("#");
        }
        printf("\n");
    }
    return 0;
}