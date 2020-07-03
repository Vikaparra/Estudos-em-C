#include <stdio.h>
#include <math.h>

	//-----------------------------------------
	//DESCOBRIR SE O ANO EH BISSEXTO
	//-----------------------------------------

int bissexto(int Y)
{
	int ano = Y;
	if (ano%4==0)
	{
		if (ano%100==0)
		{
			if (ano%400==0)
			{
				return(1);
			}
			else
			{
				return(0);
			}
		}
		else
		{
			return(1);
		}
	}
	else
	{ 
		return(0);
	}
}


int main ()
{
    int Y, G, C, E, N, D, X, Z, mes_pasc, data_pasc;

	scanf("%d", &Y);
	
	//-----------------------------------------
	//DESCOBRIR O DIA E MÊS DA PASCOA
	//-----------------------------------------
	
	G = (Y%19)+1;
	C = (Y/100)+1;
	X = ((3*C)/4.0)-12;
	Z = (((8*C)+5)/25.0)-5;
	E = ((11.0*G)+20.0+Z-X);
	E = E%30;
	
	if (((E == 25)&&(G > 11)) || (E == 24))
	{
		E++;
	}
	
	N = 44-E;
	
	if(N < 21)
	{
		N = N+30;
	}
	
	D = ((5*Y)/4)-(X+10);
	N = ((N+7)-((D+N)%7));
	
	if(N > 31)
	{
	    mes_pasc = 4;
	    data_pasc = N-31;
	}
	
	else
	{
	    mes_pasc = 3;
	    data_pasc = N;
	}
	
	//-----------------------------------------
	//DESCOBRIR O DIA DA SEMANA DE 1 DE JANEIRO
	//-----------------------------------------
	
	int dia_semana_jan = 0;
	
	if(mes_pasc == 3)
	{
		dia_semana_jan = 8 - ((data_pasc + 28 + 31 + bissexto(Y))%7);
	}
	
	else if (mes_pasc == 4)
	{
		dia_semana_jan = 8 - ((data_pasc + 28 + 31 + 31 + bissexto(Y))%7);
	}
	
	if (dia_semana_jan > 6)
	{
		dia_semana_jan -=7;
	}
	
	//------------------------------------------
	//PRINTANDO MATRIZ
	//ca = coluna ano, la = linha ano, m = mes, d = dia
	//------------------------------------------
	
	int aux_impar = dia_semana_jan, d=01, m=0 , aux_par , aux_geral, ca, la, feve = 28+bissexto(Y);
	int calendario[12][6][7]; int meses [12] = {31,feve,31,30,31,30,31,31,30,31,30,31}; char nome_meses[12][40] = {"Janeiro                      ", "Fevereiro                    ", "Março                        ", "Abril                        ", "Maio                         ", "Junho                        ","Julho                        ", "Agosto                       ","Setembro                     ","Outubro                      ","Novembro                     ","Dezembro                     "};

    printf("Calendario do ano %d\n", Y);

    for (m = 0; m < 11; m=m+2)
	{
        //MES IMPAR

        printf("|-----------------------------|\n");
        printf("|%s|\n", nome_meses[m]);
        printf("|-----------------------------|\n");  
        printf("| dom seg ter qua qui sex sab |\n");

        d=1;

        aux_geral = aux_impar;
		for (la = 0; la < 6; la++)
		{
			for ( ca = aux_impar ; ca < 7 ; d++, ca++)
			{
				if (d<=meses[m])
				{
					calendario[m][la][ca] = d;
			    	aux_par = ca+1;
				}

				else
                {
			    	calendario[m][la][ca] = 42;
                }

			}

            //correção da variavel auxiliar
            aux_impar = 0;

            //correção para ficar certinho no printf
            if (aux_par>=7)
            {
                aux_par = 0;
            }

		}

        //-----------------------------------
		//PRINTANDO A MATRIZ IMPAR
        //-----------------------------------

		d=1;
				
		for (la = 0; la < 6; la++)
		{
		    printf("|");

			for ( ca = 0 ; ca < 7 ; d++, ca++)
			{
				if (calendario[m][la][ca]>meses[m] || calendario[m][la][ca]<1 || d<= aux_geral)
					printf("  --");
					
				else
					printf("  %02d", calendario[m][la][ca]);
			}
			
			printf(" |\n");
		}
		
		d=01;
		
        //-----------------------------------
		//MES PAR
        //-----------------------------------

        printf("|-----------------------------|\n");
        printf("|%s|\n", nome_meses[m+1]);
        printf("|-----------------------------|\n");
        printf("| dom seg ter qua qui sex sab |\n");

        aux_geral = aux_par;

		for (la = 0; la < 6; la++)
		{
		    
			for ( ca = aux_par ; ca < 7 ; d++, ca++)
			{

				if (d<=meses[m+1])
				{
					calendario[m+1][la][ca] = d;
			    	aux_impar = ca+1;
				}
				
				else
			    	calendario[m+1][la][ca] = 42;
			}
			
		aux_par = 0;

        if (aux_impar>=7)
            aux_impar = 0;

		}
		
        //-----------------------------------
		//PRINTANDO A MATRIZ PAR
        //-----------------------------------

		d=01;
				
		for (la = 0; la < 6; la++)
		{
		    printf("|");
			for ( ca = 0 ; ca < 7 ; d++, ca++)
			{
				if (calendario[m+1][la][ca]>meses[m+1] || calendario[m+1][la][ca]<1 || d<= aux_geral)
					printf("  --");
					
				else
					printf("  %02d", calendario[m+1][la][ca]);		
			}
			
			printf(" |\n");

		}

	}
	
	printf("|-----------------------------|\n");

	return 0;
}