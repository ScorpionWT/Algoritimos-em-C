#include<stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	int n, c;
	setlocale (LC_ALL, "");
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	c = n*n*n;
	printf("\nVoc� digitou o n�mero %d e o cubo dele � %d", n, c);
}
