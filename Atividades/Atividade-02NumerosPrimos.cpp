#include<stdio.h>
//C�digo baseado no Evellyne Anunciada

int main(){
	
	//Declara��o de Variaveis
	int a=2,b=2,c=0;
	
	//Apresenta��o da fun��o do c�digo
    printf("Esses sao os numeros primos entre 1 e 100: ");
    
    //Contador at� o 100
	while(a<=100){
		//Verifica��o de numeros
		while(b<a){
			if(a%b==0){
				
				c++;
				break;
			}
		b++;
		}
		
		b=2;
		
		if(c==0){
		printf("\n %d",a);
		
		}
		c=0;
		a++;
	
	}		
}


