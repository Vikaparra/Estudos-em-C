#include <stdio.h>
#include <string.h>

int main () 
{
  
 
	int i = 0, x = 0;  
	char nome[81], nomeinv[81];
	   
	fgets (nome, 81, stdin);
	 
	while (i < 81)	
	{
		
  		if(nome[i] == '\n')
		{
					  
			nome[i] = '\0';	 
			break;
		
		}
		   
		i++;
		
	}

	 
	for (i = 0; i <= strlen (nome); i++)
	{

		 nomeinv[i] = nome[i] ;  

	}
	  
	  
	while (i < 81)	
	{
		  
		if (nomeinv[i] == '\n')
		{
			  
			nomeinv[i] = '\0'; 
			break;
			
		}
			  
		i++;
		
	}
	
	for (i = 0; i <= strlen (nome) - 1; i++)
	{

		if ( (nome[i] > 64 )&&( nome[i] < 91) )
		{

			nome[i] += 32 ;  

		}

		 if ( (nomeinv[i] > 64 )&&( nomeinv[i] < 91) )
		{

			 nomeinv[i] += 32 ;  

		}
	}
	
	for (i = 0; i < strlen (nomeinv) / 2; i++)
	{
		  
		x = nomeinv[i];  
		nomeinv[i] = nomeinv[strlen (nomeinv) - i - 1];	  
		nomeinv[strlen (nomeinv) - i - 1] = x;
			
	}
	
	 
	if (strcmp(nome, nomeinv) == 0)
	{

		puts("Esta palavra e um palindromo\n");

	}

	else
	{

		puts("Esta palavra nao e um palindromo\n");
	}	 

	return 0;

}