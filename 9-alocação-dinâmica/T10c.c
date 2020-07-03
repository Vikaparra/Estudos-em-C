#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct dados
    {
        char nome[101];
        int ra;
        float p1;
        float p2;
    };

int main ()
{
    int n, i;
    
    scanf("%d", &n);

    struct dados* alunos;
    alunos = (struct dados*)malloc(n*sizeof(struct dados));

    for ( i = 0; i < n; i++)
    {
        getchar();
        scanf("%[^\n]", alunos[i].nome);
        scanf("%d", &alunos[i].ra);
        scanf("%f", &alunos[i].p1);
        scanf("%f", &alunos[i].p2);
    }
    
    for ( i = 0; i < n; i++)
    {
       printf("%d\t%s\t%.2f\n",  alunos[i].ra, alunos[i].nome, (alunos[i].p1+alunos[i].p2)/2);
    }

    return 0;
    
}