#include <stdio.h>
#include <stdlib.h>

int main () {
	float a, b;
	char sinal;
	scanf("%f%c%f", &a, &sinal, &b);
	
	if (sinal == '+'){
		printf("%.3f+%.3f=%.3f", a, b, (a+b));
	}
	else{
		if (sinal == '-'){
		printf("%.3f-%.3f=%.3f", a, b, (a-b));
		}
		else{
			if (sinal == '*') {
			printf("%.3f*%.3f=%.3f", a, b, (a*b));
			}
			else {
				if (sinal == '/'){
				printf("%.3f/%.3f=%.3f", a, b, (a/b));
				}
				else {
				printf("Operador invalido");
				}
			}
		}
	}
	return 0;
}