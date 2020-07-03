#include <stdio.h>

int main ()
{

    float IMC;
	
	struct corpo
	{
		float altura;
		float peso;
		char nome[81];
		
	};
	
	struct corpo p1;
	
	//lendo as informacoes
	scanf("%f", &p1.altura);	
	scanf("%f", &p1.peso);
	scanf("%s", p1.nome);
	
	//calculando o IMC 
	IMC = p1.peso/(p1.altura*p1.altura);
	
	printf("%.3f\n", IMC);
	
	return 0;
	
}