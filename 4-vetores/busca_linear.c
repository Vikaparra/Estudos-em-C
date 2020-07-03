#include <stdio.h>

int main () {
	
	float valores[20];
	int i;
	float x;

	
	for(i=0;i<20;i++){
		scanf("%f", &valores[i]);
	}
	
	scanf("%f", &x);
		
	while(x>=0){
	    	i=0;
        	while ((valores[i] != x) && (i<20)){
			i++;
			}
		
			if (i<20)
				printf("existe\n");
			else
				printf("nao existe\n");
			
			scanf("%f", &x);
		}
return 0;
}