#include <stdio.h>
#include <math.h>

float media(char letra,float nota1,float nota2);

int main ()
{
    char letra;
	float nota1, nota2;
	
	scanf("%c", &letra);
	scanf("%f %f", &nota1, &nota2);
	
	printf("%.3f\n", media(letra, nota1, nota2));

	return 0;
}

float media(char letra,float nota1,float nota2)
{
	
	switch (letra)
	{
		case 'A':
			return ((nota1+nota2)/2);
			break;
		
		case 'B':
			return (sqrt(nota1*nota2));
			break;
			
		default:
			return 0;
			break;
	
	}
	
}