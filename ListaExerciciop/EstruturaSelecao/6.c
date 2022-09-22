#include<stdio.h>

int main(){
	int codigo = 0;
	float quantidade = 0;
	printf("Digite a quantidade de litros: ");
	scanf("%f", &quantidade);
	printf("Codigo do comprador: ");
	scanf("%d", &codigo);
	
	if(codigo == 1){
		if(quantidade <= 20){
			printf("Valor: %.2f", (quantidade *(2.90*0.97)));
			return 0;
		}
	
		if(quantidade == 2){
			printf("Valor: %.2f", (quantidade *(2.90*0.95)));
			return 0;
		}
	}
	
	if(codigo == 2){
		if(quantidade <= 20){
			printf("Valor: %.2f", (quantidade *(3.30*0.96)));
			return 0;
		}
	
		if(quantidade == 2){
			printf("Valor: %.2f", (quantidade *(3.30*0.94)));
			return 0;
		}
	}
	
	printf("Codigo invalido!");
	return 0;
}
