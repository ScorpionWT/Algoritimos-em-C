#include<stdio.h>

main(){
	//Apresenta��o do c�digo
	printf("Sequencia de Fibonacci: ");
	
	//Declara��o de vari�veis
	int n1, n2 = 1, n3;
	
	//Print de variaveis iniciais
	printf("\n%d\t%d", n1, n2);
	
	//Estrutura de repeti��o
	for(int i = 3; i <= 10;){
		//Estrutura de calculo
		n3 = n1+n2;
		n1 = n2;
		n2 = n3;
		i++;
		
		//Mosta as respostas obtidas do calculo
		printf("\t%d", n3);
	}
}

