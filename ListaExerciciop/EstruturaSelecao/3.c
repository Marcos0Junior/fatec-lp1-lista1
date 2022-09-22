#include<stdio.h>

int main(){
	int codigo = 0;
	float valor = 0;
	printf("Digite o valor da compra: ");
	scanf("%f", &valor);
	printf("Codigo do comprador: ");
	scanf("%d", &codigo);
	
	if(codigo == 1){
		printf("Valor: %.2f", valor - valor*0.1);
		return 0;
	}
	
	if(codigo == 2){
		printf("Valor: %.2f", valor - valor*0.05);
		return 0;
	}
	
	if(codigo == 3){
		printf("Valor: %.2f", valor);
		return 0;
	}
	
	printf("Codigo invalido!");
	return 0;
}
