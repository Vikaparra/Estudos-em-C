#include <stdio.h>

#define N 20

int main () {
	int A[N][N], B[N][N], C[N][N];
	int la, lb, ca, cb, numla, numca, numlb, numcb;
	
	printf("Coloque a quantidade de linhas e de colunas de A\n");
	scanf("%d %d", &numla, &numca);
	
	printf("Coloque a quantidade de linhas e de colunas de B\n");
	scanf("%d %d", &numlb, &numcb);
	
	while (numla != numcb)
	{
		printf("o num de linhas de A tem que ser igual ao num de colunas de B, tente de novo otario \n");
	
    	printf("Coloque a quantidade de linhas e de colunas de A\n");
    	scanf("%d %d", &numla, &numca);
    	
    	printf("Coloque a quantidade de linhas e de colunas de B\n");
    	scanf("%d %d", &numlb, &numcb);
    	
	}
	
	printf("Insira os valores de A (numeros de 2 casas prfvr)\n");
	
	for (la = 0; la < numla; la++)
	{
	
		for (ca = 0; ca < numca; ca++)
		{
		
			scanf("%d", &A[la][ca]);
			
		}
		
	}
	
	printf("Insira os valores de B (numeros de 2 casas prfvr)\n");
		
	for (lb = 0; lb < numlb; lb++)
	{
	
		for (cb = 0; cb < numcb; cb++)
		{
		
			scanf("%d", &B[lb][cb]);
			
		}
		
	}
	
	for ( la = 0 ; la < numla ; la++ )
	{
	
		for ( cb = 0 ; cb < numcb ; cb++ )
		{
		    C[la][cb]=0;
		
			for ( ca = 0 , lb = 0 ; ca < numca , lb < numlb ; ca++ , lb++ )
			{
			    
			C[la][cb]+= A[la][ca]*B[lb][cb];
			
			}
			
		}
		
	}
	
	printf("Matriz A:\n");
	for (la = 0; la < numla; la++)
	{
		for (ca = 0; ca < numca; ca++)
		{
			printf("%2d ", A[la][ca]);
		}
		
		printf("\n");
	}
	
	printf("Matriz B:\n");
	for (lb = 0; lb < numlb; lb++)
	{
		for (cb = 0; cb < numcb; cb++)
		{
			printf("%2d ", B[lb][cb]);
		}
		
		printf("\n");
	}
	
	printf("Resultado: \n");

	for (la = 0; la < numla; la++)
	{
	
		for (cb = 0; cb < numcb; cb++)
		{
		
			printf("%2d ", C[la][cb]);
			
		}
		
		printf("\n");
	}

	return 0;
	
}