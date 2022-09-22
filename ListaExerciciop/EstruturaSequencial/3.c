#include<stdio.h>

int main(){
	float valor;
	printf("Digite o valor do carro: ");
	scanf("%f", &valor);
	printf("Valor: %.2f\n", valor + valor*0.28 + valor*0.45);
	
	return 0;
}
