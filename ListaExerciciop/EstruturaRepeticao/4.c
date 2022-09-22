#include<stdio.h>

int main(){
	float valor = 0, maiorValor = 0, mediaAritmetica = 0;
	int i;
	
	for(i = 1; i <= 15; i++){
		printf("Digite o valor do produto #%d: ", i);
		scanf("%f", &valor);
		mediaAritmetica += valor;
		
		if(maiorValor < valor || i == 1)
			maiorValor = valor;
	}
	
	mediaAritmetica /= 15;
	
	printf("Maior valor: %.2f", maiorValor);
	printf("\nMedia aritmetica: %.2f", mediaAritmetica);
}
