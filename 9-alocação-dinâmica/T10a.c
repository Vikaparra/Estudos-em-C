#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int grau, i;
    float* coef;
    float x, funcao = 0;

    scanf("%d", &grau);

    coef = (float*)malloc((grau+1)*sizeof(float));

    for ( i = 0; i < grau+1; i++)
    {
        scanf("%f", &coef[i]);
    }

    scanf("%f", &x);

    for ( i = 0; i < grau+1; i++)
    {
        funcao = funcao + coef[i]*(pow(x, i));
    }
    
    printf("%.2f\n", funcao);

    return 0;
}