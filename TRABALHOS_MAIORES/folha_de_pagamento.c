#include <stdio.h>   //Este trabalho consiste em colocar como entrada o nome, o salario base e a comissão de funcionarios de uma loja
#include <stdlib.h>  //E como saída receber uma lista com os salários do mês em ordem crescente, e os nomes de quem receberá os salários
#include <string.h>  //em ordem alfabética.

    //Definindo uma struct para organizar os dados dos funcionarios

    struct dados
    {

        char nome[101];
        float salario_base;
        float comissao;
        float salario_final;

    };

int main ()
{

    int n=0, i=0, j=0; //n = contador de numero do funcionario e i e j = contadores comuns de for
    struct dados funcionarios[100]; //criando um vetor para armazenar no máximo 100 structs
    struct dados struct_aux; //struct auxiliar para fazer o bubble sort do vetor de struct

    //Estrutura de lacos para a leitura dos dados, que vai parar quando chegar em 100 ou quando digitarem FIM

    while (n<100 )
    {

        scanf("%[^\n]", funcionarios[n].nome); //Ler o nome do funcionario

        if (strcmp(funcionarios[n].nome, "FIM\0") == 0) //Caso escreva FIM, vai parar de ler os dados
        {
            break;
        }
          
        scanf("%f", &funcionarios[n].salario_base); //Ler o Salario Base do funcionario
        scanf("%f", &funcionarios[n].comissao); //Ler a comissão do funcionário

        getchar(); //Só pra tirar um buff que estava bugando o começo do while
        
        funcionarios[n].salario_final = funcionarios[n].salario_base+funcionarios[n].comissao; //Calculo do salário final
    
        n++; //incrementar o contador do numero de funcionarios

    }

    //Fazer um bubble sort pra organizar de acordo com os salarios em ordem crescente
    for (j=n-1; j>0; j--) 
    {
        for(i=0; i<j; i++) 
        {
            if (funcionarios[i].salario_final > funcionarios[i+1].salario_final) 
            {

                struct_aux = funcionarios[i];
                funcionarios[i] = funcionarios[i+1];
                funcionarios[i+1] = struct_aux;

            }
        }
    }

    //Fazer outro bubble sort pra organizar cada funcionario que recebe quantidade igual de salarios em ordem alfabética
    for (j=n-1; j>0; j--) 
    {
        for(i=0; i<j; i++) 
        {
            if ((funcionarios[i].salario_final == funcionarios[i+1].salario_final)&&(strcmp(funcionarios[i].nome,funcionarios[i+1].nome)>0)) 
            {

                struct_aux = funcionarios[i];
                funcionarios[i] = funcionarios[i+1];
                funcionarios[i+1] = struct_aux;

            }
        }
    }
    
    //Printando ja na ordem de salários e alfabética
    
    printf("Folha de Pagamento\n"); //para imprimir o primeiro, que não dava pra entrar no for porque não tinha com quem comparar

    printf("\nSalario no Mes: R$ %.2f\n", funcionarios[0].salario_final);
    printf("- %s\n", funcionarios[0].nome);

    for ( i = 1; i < n; i++)
    {

        if (funcionarios[i].salario_final!=funcionarios[i-1].salario_final) //se o salário for um novo valor unico, printe isso
        {
            
            printf("\nSalario no Mes: R$ %.2f\n", funcionarios[i].salario_final);
            printf("- %s\n", funcionarios[i].nome);
            
        }
        
        else //se o salário for um valor repetido, printe isso
        {
            printf("- %s\n", funcionarios[i].nome);
        }
    } 

    return 0;
    
}