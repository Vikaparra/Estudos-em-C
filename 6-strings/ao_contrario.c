#include <stdio.h>
#include <string.h>

int main() 
{
    
    int i = 0;
	char nome[81];
	
	fgets(nome, 81, stdin);
	
	while (i<81)
	{
		
	    if(nome[i] == '\n')
	    {
			
	        nome[i] = '\0';
	        break;
	    }
	    
	    i++;
	}
	
	for ( i = strlen(nome)-1; i >= 0 ; i--)
	{
		
		printf("%c", nome[i]);
		
	}
	
	printf("\n");
	
	return 0;
	
}