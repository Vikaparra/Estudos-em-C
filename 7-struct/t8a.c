#include <stdio.h>
#include <math.h>

int main ()
{
    
	double distancia;
	
	typedef struct Ponto
	{
		
		double x;
		double y;
	
	} Ponto;
		
	Ponto p1, p2;
	
	scanf("%lf %lf", &p1.x, &p1.y);
	scanf("%lf %lf", &p2.x, &p2.y);
	
	distancia = sqrt(((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y)));
	
	if (distancia < 0.0000001)
	{
		
		printf("os pontos sao iguais\n");
		
	}
	
	else
	{
		
		printf("os pontos nao sao iguais\n");
		
	}
	
	return 0;

}