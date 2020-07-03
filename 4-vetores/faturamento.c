#include <stdio.h>

int main () {
	
	float valores[10], faturamento= 0.0;
	int i, quantidade[10], qtd_vendidos = 0;
	
	for(i=0;i<10;i++){
		scanf("%d", &quantidade[i]);
		qtd_vendidos = qtd_vendidos + quantidade[i];
	}
	
	for(i=0;i<10;i++){
		scanf("%f", &valores[i]);
	}
	
	for(i=0;i<10;i++){
		faturamento = faturamento + (quantidade[i]*valores[i]);
	}
	
	printf("O lucro foi de %.3f e a quantidade de produtos vendidos foi de %d", faturamento, qtd_vendidos);
	
	
return 0;
}