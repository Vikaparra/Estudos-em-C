#include <stdio.h>
#include <math.h>

float calculo(char opera,float num1,float num2);

int main ()
{
    char opera;
	float num1, num2;
	
	scanf("%f%c%f", &num1, &opera, &num2);
	
	printf("%.3f\n", calculo(opera, num1, num2));

	return 0;
}

float calculo(char opera,float num1,float num2)
{
	
	switch (opera)
	{
		case '+':
			return (num1+num2);
			break;
		
		case '-':
			return (num1-num2);
			break;
			
		case '*':
			return (num1*num2);
			break;
		
		case '/':
			return (num1/num2);
			break;
			
		case '^':
			return (pow(num1, num2));
			break;
			
		default:
			return 0;
			break;
	
	}
	
}