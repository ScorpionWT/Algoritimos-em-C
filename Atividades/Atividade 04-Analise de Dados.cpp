#include<stdio.h>
#include<locale.h>//Biblioteca que disponibiliza o sistema UTF-8

main(){
	setlocale(LC_ALL,"");//Ativa��o da biblioteca locale.h
	
	printf("---Digite um n�mero e descubra se � IMPAR ou PAR---\n");
	printf("\nREGRA:\nVoc� pode ver 5 n�meros de cada vez.\n");
	
	//Declara��o do array
	int numbers[5];
	
	//
	for(int i=1; i<=5; i++){
		printf("\n==================================");
		printf("\nDigite o %d� n�mero: ", i);
		scanf("%d", &numbers[i]);
		
		if(numbers[i] % 2 == 0){
			printf("O n�mero %d � par.", numbers[i]);
		}
		
		else{
			printf("O n�mero %d � impar.", numbers[i]);
		}
	}
	
}
