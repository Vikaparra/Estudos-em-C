#include <stdio.h>

#define N 20

int main () {
	int m1[N][N];
	int l, c, num_linhas, num_colunas;
	
	scanf("%d %d", &num_linhas, &num_colunas);
	
	for (l = 0; l < num_linhas; l++)
	{
		for (c = 0; c < num_colunas; c++)
		{
			scanf("%d", &m1[l][c]);
		}
	}

	for (c = 0; c < num_colunas; c++)
	{
		for (l = 0; l < num_linhas; l++)
		{
			printf("%2d ", m1[l][c]);
		}
		
		printf("\n");
	}
	
	return 0;
	
}