#include<stdio.h>
//C�digo baseado no Evellyne Anunciada

main(){
	//Apresenta��o da fun��o do c�digo
    printf("Esses sao os numeros primos entre 1 e 100: ");
    
    //Declara��o das variaveis
    int counter, c, b= 2, a = 2;
    
    //Looping principal da execu��o
    while( a < 100){
    	
    	while(b < a){
    		if(a % b == 0){
    			c = 1;
    			
			}
    		b++;
		}
		
		b = 2;
		
		if(c == 0){
			printf("\n%d", a);
			counter++;
		}
		c =0;
		a++;
		
	}
}

