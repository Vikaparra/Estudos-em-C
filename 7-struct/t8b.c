#include <stdio.h>
#include <math.h>

int main ()
{
	
	struct ponto
	{
		
		double x;
		double y;
	
	};
	
	//pie = ponto inferior direito
	//psd = ponto superior direito
	
	typedef struct retangulo
	{
		
		struct ponto pie;
		struct ponto psd;
	
	} retangulo;
	
	retangulo r1, r2;
	
	//coordenadas de r1
	scanf("%lf %lf", &r1.pie.x, &r1.pie.y);
	scanf("%lf %lf", &r1.psd.x, &r1.psd.y);
	
	//coordenadas de r2
	scanf("%lf %lf", &r2.pie.x, &r2.pie.y);
	scanf("%lf %lf", &r2.psd.x, &r2.psd.y);
	
	//dizer se o retangulo 2 esta contido em 1
	if ((r2.pie.x >= r1.pie.x)&&(r2.pie.x <= r1.psd.x)&&(r2.psd.x <= r1.psd.x)&&(r2.psd.x >= r1.pie.x)&&(r2.pie.y >= r1.pie.y)&&(r2.pie.y <= r1.psd.y)&&(r2.psd.y <= r1.psd.y)&&(r2.psd.y >= r1.pie.y))
	{
		
		printf("o segundo retangulo esta contido no primeiro\n");
		
	}
	
	else
	{
		
		printf("o segundo retangulo nao esta contido no primeiro\n");
		
	}
	
	return 0;

}