#include <stdio.h>

void busca(int *A, int N, int i, int *maior, int *menor)
{
    int j, aux; //j = outro contador p bubble sort, aux = auxiliar para bubble sort

    for ( i = N-1; i > 0; i--)//limite da ultima posição
    {
        for (j=0; j < i; j++)//comparando entre pares
        {
            if (A[j] > A[j+1])
            {
                aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;
            }
        }
    }

*maior = A[N-1];
*menor = A[0];

}

int main () 
{

    int N; scanf("%d", &N);
    int A[N], i, maior, menor;;

    for ( i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    busca(A, N, i, &maior, &menor);

    printf("maior valor: %d\n", maior);
    printf("menor valor: %d\n", menor);

    return 0;

}