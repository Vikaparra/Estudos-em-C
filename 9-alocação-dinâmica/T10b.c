#include <stdio.h>

#define N 20

int main () {
	int m1[N][N];
	int l, c, num_linhas, num_colunas, contador = 0;
	
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
			m2[c][l] = m1[l][c];
		}
	}

    for (l = 0; l < num_linhas; l++)
	{
		for (c = 0; c < num_colunas; c++)
		{
			if(m2[c][l] == m1[l][c])
            {
                contador = 0;
            }
            else
            {
                contador = 1;
            }
            
		}
	}

    if (contador = 1)
    {
        printf("Simetrica");
    }
    else
    {
        printf("nao simetrica");
    }
    
	return 0;
	
}